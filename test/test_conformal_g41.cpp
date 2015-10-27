#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main()
#include "catch.hpp"

#include <iostream>

#include "hep/ga.hpp"
#include "hep/ga/squared_reverse_norm.hpp"
#include "hep/ga/inversion.hpp"
#include "hep/ga/versor_product.hpp"


typedef double scalar_type;

typedef hep::algebra<scalar_type, 4, 1> cga;

typedef hep::multi_vector<cga, hep::list<0>> scalar;

typedef hep::multi_vector<cga, hep::list<1,2,4>> vector;

typedef hep::multi_vector<cga, hep::list<1,2,4,8,16>> point;

typedef hep::multi_vector<cga, hep::list<0, 3, 5, 6>> rotor;

typedef hep::multi_vector<cga, hep::list<0, 9, 10, 12, 17, 18, 20>> translator;

typedef hep::multi_vector<cga, hep::list<8,16>> null_vector;

// define basis-blades
#define sc  hep::blade<cga,  0>()
#define e1 hep::blade<cga,  1>()
#define e2 hep::blade<cga,  2>()
#define e3 hep::blade<cga,  4>()
#define ep hep::blade<cga,  8>()
#define e12 hep::blade<cga,  3>()
#define e13 hep::blade<cga,  5>()
#define e23 hep::blade<cga,  6>()
#define em hep::blade<cga, 16>()
#define I hep::blade<cga, 31>()
#define ni null_vector{-1.0, 1.0}
#define no null_vector{0.5, 0.5}

point create_point(vector const& v)
{
    return hep::grade<1>(v + 0.5 * v * v * ni + no);
}

TEST_CASE("conformal")
{
    vector v = e1 + e2 + e3;
    std::cout << v[0] << " ";
    std::cout << v[1] << " ";
    std::cout << v[2] << std::endl;

    std::cout << e1.at<1>() << std::endl;

    translator t = 1.0 - 0.5 * (0.5 * e1 + 1.0 * e2 + 1.5 * e3) * ni;

    auto p = t * no * !t;

    std::cout << p.at<1>() << " ";
    std::cout << p.at<2>() << " ";
    std::cout << p.at<4>() << std::endl;


    scalar norm = hep::rnorm(v);
    std::cout << norm[0] << std::endl;

    vector vinv = !v;
    std::cout << vinv[0] << " ";
    std::cout << vinv[1] << " ";
    std::cout << vinv[2] << std::endl;

}

TEST_CASE("versor_product")
{
    rotor r{cos(M_PI / 6.0), - sin(M_PI / 6.0), 0.0, 0.0};
    translator t = 1.0 - 0.5 * (1.0 * e1 + 2.0 * e2 + 3.0 * e3) * ni;
    vector v{1.0,2.0,3.0};
//    auto p = hep::eval( v + 0.5 * v * v * ni + no );

    point p = create_point(v);

    std::cout << "rotor" << " ";
    std::cout << r.at<0>() << " ";
    std::cout << r.at<3>() << " ";
    std::cout << r.at<5>() << " ";
    std::cout << r.at<6>() << std::endl;

//    auto p = hep::versor_product(t * r, origin);

    std::cout << p.at<1>() << " ";
    std::cout << p.at<2>() << " ";
    std::cout << p.at<4>() << " ";
    std::cout << p.at<8>() << " ";
    std::cout << p.at<16>() << std::endl;

}

TEST_CASE("null_vector")
{
//    null_point np(2.0);
//    std::cout << np[0] << std::endl;

}
