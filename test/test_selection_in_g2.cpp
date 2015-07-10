#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main()
#include "catch.hpp"

#include <tuple>
#include <hep/ga_types.hpp>
#include <hep/ga/selection.hpp>

TEST_CASE("selection")
{
	auto mvs = std::make_tuple(
		mv2<0>      { 2.0 },
		mv2<1,2>    { 5.0, 7.0 },
		mv2<3>      { 17.0 },
		mv2<0,1,2>  { 23.0, 29.0, 31.0 },
		mv2<0,3>    { 47.0, 53.0 },
		mv2<1,2,3>  { 67.0, 71.0, 73.0 },
		mv2<0,1,2,3>{ 97.0, 101.0, 103.0, 107.0 }
	);

	mv2<0> mv01 = hep::select<0>(std::get<0>(mvs));

	REQUIRE(mv01.at<0>() == 2.0);

	mv2<1> mv02 = hep::select<1>(std::get<1>(mvs));

	REQUIRE(mv02.at<1>() == 5.0);

	mv2<2> mv03 = hep::select<2>(std::get<1>(mvs));

	REQUIRE(mv03.at<2>() == 7.0);

	mv2<1,2> mv04 = hep::select<1,2>(std::get<1>(mvs));

	REQUIRE(mv04.at<1>() == 5.0);
	REQUIRE(mv04.at<2>() == 7.0);

	mv2<3> mv05 = hep::select<3>(std::get<2>(mvs));

	REQUIRE(mv05.at<3>() == 17.0);

	mv2<0> mv06 = hep::select<0>(std::get<3>(mvs));

	REQUIRE(mv06.at<0>() == 23.0);

	mv2<1> mv07 = hep::select<1>(std::get<3>(mvs));

	REQUIRE(mv07.at<1>() == 29.0);

	mv2<2> mv08 = hep::select<2>(std::get<3>(mvs));

	REQUIRE(mv08.at<2>() == 31.0);

	mv2<0,1> mv09 = hep::select<0,1>(std::get<3>(mvs));

	REQUIRE(mv09.at<0>() == 23.0);
	REQUIRE(mv09.at<1>() == 29.0);

	mv2<0,2> mv10 = hep::select<0,2>(std::get<3>(mvs));

	REQUIRE(mv10.at<0>() == 23.0);
	REQUIRE(mv10.at<2>() == 31.0);

	mv2<1,2> mv11 = hep::select<1,2>(std::get<3>(mvs));

	REQUIRE(mv11.at<1>() == 29.0);
	REQUIRE(mv11.at<2>() == 31.0);

	mv2<0,1,2> mv12 = hep::select<0,1,2>(std::get<3>(mvs));

	REQUIRE(mv12.at<0>() == 23.0);
	REQUIRE(mv12.at<1>() == 29.0);
	REQUIRE(mv12.at<2>() == 31.0);

	mv2<0> mv13 = hep::select<0>(std::get<4>(mvs));

	REQUIRE(mv13.at<0>() == 47.0);

	mv2<3> mv14 = hep::select<3>(std::get<4>(mvs));

	REQUIRE(mv14.at<3>() == 53.0);

	mv2<0,3> mv15 = hep::select<0,3>(std::get<4>(mvs));

	REQUIRE(mv15.at<0>() == 47.0);
	REQUIRE(mv15.at<3>() == 53.0);

	mv2<1> mv16 = hep::select<1>(std::get<5>(mvs));

	REQUIRE(mv16.at<1>() == 67.0);

	mv2<2> mv17 = hep::select<2>(std::get<5>(mvs));

	REQUIRE(mv17.at<2>() == 71.0);

	mv2<3> mv18 = hep::select<3>(std::get<5>(mvs));

	REQUIRE(mv18.at<3>() == 73.0);

	mv2<1,2> mv19 = hep::select<1,2>(std::get<5>(mvs));

	REQUIRE(mv19.at<1>() == 67.0);
	REQUIRE(mv19.at<2>() == 71.0);

	mv2<1,3> mv20 = hep::select<1,3>(std::get<5>(mvs));

	REQUIRE(mv20.at<1>() == 67.0);
	REQUIRE(mv20.at<3>() == 73.0);

	mv2<2,3> mv21 = hep::select<2,3>(std::get<5>(mvs));

	REQUIRE(mv21.at<2>() == 71.0);
	REQUIRE(mv21.at<3>() == 73.0);

	mv2<1,2,3> mv22 = hep::select<1,2,3>(std::get<5>(mvs));

	REQUIRE(mv22.at<1>() == 67.0);
	REQUIRE(mv22.at<2>() == 71.0);
	REQUIRE(mv22.at<3>() == 73.0);

	mv2<0> mv23 = hep::select<0>(std::get<6>(mvs));

	REQUIRE(mv23.at<0>() == 97.0);

	mv2<1> mv24 = hep::select<1>(std::get<6>(mvs));

	REQUIRE(mv24.at<1>() == 101.0);

	mv2<2> mv25 = hep::select<2>(std::get<6>(mvs));

	REQUIRE(mv25.at<2>() == 103.0);

	mv2<3> mv26 = hep::select<3>(std::get<6>(mvs));

	REQUIRE(mv26.at<3>() == 107.0);

	mv2<0,1> mv27 = hep::select<0,1>(std::get<6>(mvs));

	REQUIRE(mv27.at<0>() == 97.0);
	REQUIRE(mv27.at<1>() == 101.0);

	mv2<0,2> mv28 = hep::select<0,2>(std::get<6>(mvs));

	REQUIRE(mv28.at<0>() == 97.0);
	REQUIRE(mv28.at<2>() == 103.0);

	mv2<0,3> mv29 = hep::select<0,3>(std::get<6>(mvs));

	REQUIRE(mv29.at<0>() == 97.0);
	REQUIRE(mv29.at<3>() == 107.0);

	mv2<1,2> mv30 = hep::select<1,2>(std::get<6>(mvs));

	REQUIRE(mv30.at<1>() == 101.0);
	REQUIRE(mv30.at<2>() == 103.0);

	mv2<1,3> mv31 = hep::select<1,3>(std::get<6>(mvs));

	REQUIRE(mv31.at<1>() == 101.0);
	REQUIRE(mv31.at<3>() == 107.0);

	mv2<2,3> mv32 = hep::select<2,3>(std::get<6>(mvs));

	REQUIRE(mv32.at<2>() == 103.0);
	REQUIRE(mv32.at<3>() == 107.0);

	mv2<0,1,2> mv33 = hep::select<0,1,2>(std::get<6>(mvs));

	REQUIRE(mv33.at<0>() == 97.0);
	REQUIRE(mv33.at<1>() == 101.0);
	REQUIRE(mv33.at<2>() == 103.0);

	mv2<1,2,3> mv34 = hep::select<1,2,3>(std::get<6>(mvs));

	REQUIRE(mv34.at<1>() == 101.0);
	REQUIRE(mv34.at<2>() == 103.0);
	REQUIRE(mv34.at<3>() == 107.0);

	mv2<0,1,2,3> mv35 = hep::select<0,1,2,3>(std::get<6>(mvs));

	REQUIRE(mv35.at<0>() == 97.0);
	REQUIRE(mv35.at<1>() == 101.0);
	REQUIRE(mv35.at<2>() == 103.0);
	REQUIRE(mv35.at<3>() == 107.0);
}
