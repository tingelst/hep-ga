#ifndef HEP_GA_NULL_VECTOR_HPP
#define HEP_GA_NULL_VECTOR_HPP

#include <hep/ga/unary_expression.hpp>
#include <hep/ga/multi_vector.hpp>
#include <hep/ga/algebra.hpp>

namespace
{
    template <typename A>
    using infty = hep::multi_vector<A, hep::list<8,16>>;

}

namespace hep {

    template <typename A, typename L>
    class null_vector : public multi_vector<A, list<1,2,4,8,16>> {
    public:

        null_vector(typename A::scalar_type e1, typename A::scalar_type e2, typename A::scalar_type e3)
                : multi_vector(hep::grade<1>(    ))


                const& value) : null_components{value}  {}




    private:
        typename A::scalar_type null_components[L::size];

    };

}

#endif //HEP_GA_NULL_VECTOR_HPP
