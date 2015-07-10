#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main()
#include "catch.hpp"

#include <tuple>
#include <hep/ga_types.hpp>
#include <hep/ga/inner_product.hpp>

TEST_CASE("inner_product")
{
	auto lhs = std::make_tuple(
		mv2<0>      { 2.0 },
		mv2<1,2>    { 5.0, 7.0 },
		mv2<3>      { 17.0 },
		mv2<0,1,2>  { 23.0, 29.0, 31.0 },
		mv2<0,3>    { 47.0, 53.0 },
		mv2<1,2,3>  { 67.0, 71.0, 73.0 },
		mv2<0,1,2,3>{ 97.0, 101.0, 103.0, 107.0 }
	);

	auto rhs = std::make_tuple(
		mv2<0>      { 3.0 },
		mv2<1,2>    { 11.0, 13.0 },
		mv2<3>      { 19.0 },
		mv2<0,1,2>  { 37.0, 41.0, 43.0 },
		mv2<0,3>    { 59.0, 61.0 },
		mv2<1,2,3>  { 79.0, 83.0, 89.0 },
		mv2<0,1,2,3>{ 109.0, 113.0, 127.0, 131.0 }
	);

	mv2<0> mv00 = hep::inner_prod(std::get<0>(lhs), std::get<0>(rhs));

	REQUIRE(mv00.at<0>() == 6.0);

	mv2<1,2> mv01 = hep::inner_prod(std::get<0>(lhs), std::get<1>(rhs));

	REQUIRE(mv01.at<1>() == 22.0);
	REQUIRE(mv01.at<2>() == 26.0);

	mv2<3> mv02 = hep::inner_prod(std::get<0>(lhs), std::get<2>(rhs));

	REQUIRE(mv02.at<3>() == 38.0);

	mv2<0,1,2> mv03 = hep::inner_prod(std::get<0>(lhs), std::get<3>(rhs));

	REQUIRE(mv03.at<0>() == 74.0);
	REQUIRE(mv03.at<1>() == 82.0);
	REQUIRE(mv03.at<2>() == 86.0);

	mv2<0,3> mv04 = hep::inner_prod(std::get<0>(lhs), std::get<4>(rhs));

	REQUIRE(mv04.at<0>() == 118.0);
	REQUIRE(mv04.at<3>() == 122.0);

	mv2<1,2,3> mv05 = hep::inner_prod(std::get<0>(lhs), std::get<5>(rhs));

	REQUIRE(mv05.at<1>() == 158.0);
	REQUIRE(mv05.at<2>() == 166.0);
	REQUIRE(mv05.at<3>() == 178.0);

	mv2<0,1,2,3> mv06 = hep::inner_prod(std::get<0>(lhs), std::get<6>(rhs));

	REQUIRE(mv06.at<0>() == 218.0);
	REQUIRE(mv06.at<1>() == 226.0);
	REQUIRE(mv06.at<2>() == 254.0);
	REQUIRE(mv06.at<3>() == 262.0);

	mv2<1,2> mv10 = hep::inner_prod(std::get<1>(lhs), std::get<0>(rhs));

	REQUIRE(mv10.at<1>() == 15.0);
	REQUIRE(mv10.at<2>() == 21.0);

	mv2<0> mv11 = hep::inner_prod(std::get<1>(lhs), std::get<1>(rhs));

	REQUIRE(mv11.at<0>() == 146.0);

	mv2<1,2> mv12 = hep::inner_prod(std::get<1>(lhs), std::get<2>(rhs));

	REQUIRE(mv12.at<1>() == -133.0);
	REQUIRE(mv12.at<2>() == 95.0);

	mv2<0,1,2> mv13 = hep::inner_prod(std::get<1>(lhs), std::get<3>(rhs));

	REQUIRE(mv13.at<0>() == 506.0);
	REQUIRE(mv13.at<1>() == 185.0);
	REQUIRE(mv13.at<2>() == 259.0);

	mv2<1,2> mv14 = hep::inner_prod(std::get<1>(lhs), std::get<4>(rhs));

	REQUIRE(mv14.at<1>() == -132.0);
	REQUIRE(mv14.at<2>() == 718.0);

	mv2<0,1,2> mv15 = hep::inner_prod(std::get<1>(lhs), std::get<5>(rhs));

	REQUIRE(mv15.at<0>() == 976.0);
	REQUIRE(mv15.at<1>() == -623.0);
	REQUIRE(mv15.at<2>() == 445.0);

	mv2<0,1,2> mv16 = hep::inner_prod(std::get<1>(lhs), std::get<6>(rhs));

	REQUIRE(mv16.at<0>() == 1454.0);
	REQUIRE(mv16.at<1>() == -372.0);
	REQUIRE(mv16.at<2>() == 1418.0);

	mv2<3> mv20 = hep::inner_prod(std::get<2>(lhs), std::get<0>(rhs));

	REQUIRE(mv20.at<3>() == 51.0);

	mv2<1,2> mv21 = hep::inner_prod(std::get<2>(lhs), std::get<1>(rhs));

	REQUIRE(mv21.at<1>() == 221.0);
	REQUIRE(mv21.at<2>() == -187.0);

	mv2<0> mv22 = hep::inner_prod(std::get<2>(lhs), std::get<2>(rhs));

	REQUIRE(mv22.at<0>() == -323.0);

	mv2<1,2,3> mv23 = hep::inner_prod(std::get<2>(lhs), std::get<3>(rhs));

	REQUIRE(mv23.at<1>() == 731.0);
	REQUIRE(mv23.at<2>() == -697.0);
	REQUIRE(mv23.at<3>() == 629.0);

	mv2<0,3> mv24 = hep::inner_prod(std::get<2>(lhs), std::get<4>(rhs));

	REQUIRE(mv24.at<0>() == -1037.0);
	REQUIRE(mv24.at<3>() == 1003.0);

	mv2<0,1,2> mv25 = hep::inner_prod(std::get<2>(lhs), std::get<5>(rhs));

	REQUIRE(mv25.at<0>() == -1513.0);
	REQUIRE(mv25.at<1>() == 1411.0);
	REQUIRE(mv25.at<2>() == -1343.0);

	mv2<0,1,2,3> mv26 = hep::inner_prod(std::get<2>(lhs), std::get<6>(rhs));

	REQUIRE(mv26.at<0>() == -2227.0);
	REQUIRE(mv26.at<1>() == 2159.0);
	REQUIRE(mv26.at<2>() == -1921.0);
	REQUIRE(mv26.at<3>() == 1853.0);

	mv2<0,1,2> mv30 = hep::inner_prod(std::get<3>(lhs), std::get<0>(rhs));

	REQUIRE(mv30.at<0>() == 69.0);
	REQUIRE(mv30.at<1>() == 87.0);
	REQUIRE(mv30.at<2>() == 93.0);

	mv2<0,1,2> mv31 = hep::inner_prod(std::get<3>(lhs), std::get<1>(rhs));

	REQUIRE(mv31.at<0>() == 722.0);
	REQUIRE(mv31.at<1>() == 253.0);
	REQUIRE(mv31.at<2>() == 299.0);

	mv2<1,2,3> mv32 = hep::inner_prod(std::get<3>(lhs), std::get<2>(rhs));

	REQUIRE(mv32.at<1>() == -589.0);
	REQUIRE(mv32.at<2>() == 551.0);
	REQUIRE(mv32.at<3>() == 437.0);

	mv2<0,1,2> mv33 = hep::inner_prod(std::get<3>(lhs), std::get<3>(rhs));

	REQUIRE(mv33.at<0>() == 3373.0);
	REQUIRE(mv33.at<1>() == 2016.0);
	REQUIRE(mv33.at<2>() == 2136.0);

	mv2<0,1,2,3> mv34 = hep::inner_prod(std::get<3>(lhs), std::get<4>(rhs));

	REQUIRE(mv34.at<0>() == 1357.0);
	REQUIRE(mv34.at<1>() == -180.0);
	REQUIRE(mv34.at<2>() == 3598.0);
	REQUIRE(mv34.at<3>() == 1403.0);

	mv2<0,1,2,3> mv35 = hep::inner_prod(std::get<3>(lhs), std::get<5>(rhs));

	REQUIRE(mv35.at<0>() == 4864.0);
	REQUIRE(mv35.at<1>() == -942.0);
	REQUIRE(mv35.at<2>() == 4490.0);
	REQUIRE(mv35.at<3>() == 2047.0);

	mv2<0,1,2,3> mv36 = hep::inner_prod(std::get<3>(lhs), std::get<6>(rhs));

	REQUIRE(mv36.at<0>() == 9721.0);
	REQUIRE(mv36.at<1>() == 1699.0);
	REQUIRE(mv36.at<2>() == 10099.0);
	REQUIRE(mv36.at<3>() == 3013.0);

	mv2<0,3> mv40 = hep::inner_prod(std::get<4>(lhs), std::get<0>(rhs));

	REQUIRE(mv40.at<0>() == 141.0);
	REQUIRE(mv40.at<3>() == 159.0);

	mv2<1,2> mv41 = hep::inner_prod(std::get<4>(lhs), std::get<1>(rhs));

	REQUIRE(mv41.at<1>() == 1206.0);
	REQUIRE(mv41.at<2>() == 28.0);

	mv2<0,3> mv42 = hep::inner_prod(std::get<4>(lhs), std::get<2>(rhs));

	REQUIRE(mv42.at<0>() == -1007.0);
	REQUIRE(mv42.at<3>() == 893.0);

	mv2<0,1,2,3> mv43 = hep::inner_prod(std::get<4>(lhs), std::get<3>(rhs));

	REQUIRE(mv43.at<0>() == 1739.0);
	REQUIRE(mv43.at<1>() == 4206.0);
	REQUIRE(mv43.at<2>() == -152.0);
	REQUIRE(mv43.at<3>() == 1961.0);

	mv2<0,3> mv44 = hep::inner_prod(std::get<4>(lhs), std::get<4>(rhs));

	REQUIRE(mv44.at<0>() == -460.0);
	REQUIRE(mv44.at<3>() == 5994.0);

	mv2<0,1,2,3> mv45 = hep::inner_prod(std::get<4>(lhs), std::get<5>(rhs));

	REQUIRE(mv45.at<0>() == -4717.0);
	REQUIRE(mv45.at<1>() == 8112.0);
	REQUIRE(mv45.at<2>() == -286.0);
	REQUIRE(mv45.at<3>() == 4183.0);

	mv2<0,1,2,3> mv46 = hep::inner_prod(std::get<4>(lhs), std::get<6>(rhs));

	REQUIRE(mv46.at<0>() == -1820.0);
	REQUIRE(mv46.at<1>() == 12042.0);
	REQUIRE(mv46.at<2>() == -20.0);
	REQUIRE(mv46.at<3>() == 11934.0);

	mv2<1,2,3> mv50 = hep::inner_prod(std::get<5>(lhs), std::get<0>(rhs));

	REQUIRE(mv50.at<1>() == 201.0);
	REQUIRE(mv50.at<2>() == 213.0);
	REQUIRE(mv50.at<3>() == 219.0);

	mv2<0,1,2> mv51 = hep::inner_prod(std::get<5>(lhs), std::get<1>(rhs));

	REQUIRE(mv51.at<0>() == 1660.0);
	REQUIRE(mv51.at<1>() == 949.0);
	REQUIRE(mv51.at<2>() == -803.0);

	mv2<0,1,2> mv52 = hep::inner_prod(std::get<5>(lhs), std::get<2>(rhs));

	REQUIRE(mv52.at<0>() == -1387.0);
	REQUIRE(mv52.at<1>() == -1349.0);
	REQUIRE(mv52.at<2>() == 1273.0);

	mv2<0,1,2,3> mv53 = hep::inner_prod(std::get<5>(lhs), std::get<3>(rhs));

	REQUIRE(mv53.at<0>() == 5800.0);
	REQUIRE(mv53.at<1>() == 5618.0);
	REQUIRE(mv53.at<2>() == -366.0);
	REQUIRE(mv53.at<3>() == 2701.0);

	mv2<0,1,2,3> mv54 = hep::inner_prod(std::get<5>(lhs), std::get<4>(rhs));

	REQUIRE(mv54.at<0>() == -4453.0);
	REQUIRE(mv54.at<1>() == -378.0);
	REQUIRE(mv54.at<2>() == 8276.0);
	REQUIRE(mv54.at<3>() == 4307.0);

	mv2<0,1,2> mv55 = hep::inner_prod(std::get<5>(lhs), std::get<5>(rhs));

	REQUIRE(mv55.at<0>() == 4689.0);
	REQUIRE(mv55.at<1>() == -260.0);
	REQUIRE(mv55.at<2>() == 196.0);

	mv2<0,1,2,3> mv56 = hep::inner_prod(std::get<5>(lhs), std::get<6>(rhs));

	REQUIRE(mv56.at<0>() == 7025.0);
	REQUIRE(mv56.at<1>() == 7273.0);
	REQUIRE(mv56.at<2>() == 8267.0);
	REQUIRE(mv56.at<3>() == 7957.0);

	mv2<0,1,2,3> mv60 = hep::inner_prod(std::get<6>(lhs), std::get<0>(rhs));

	REQUIRE(mv60.at<0>() == 291.0);
	REQUIRE(mv60.at<1>() == 303.0);
	REQUIRE(mv60.at<2>() == 309.0);
	REQUIRE(mv60.at<3>() == 321.0);

	mv2<0,1,2> mv61 = hep::inner_prod(std::get<6>(lhs), std::get<1>(rhs));

	REQUIRE(mv61.at<0>() == 2450.0);
	REQUIRE(mv61.at<1>() == 2458.0);
	REQUIRE(mv61.at<2>() == 84.0);

	mv2<0,1,2,3> mv62 = hep::inner_prod(std::get<6>(lhs), std::get<2>(rhs));

	REQUIRE(mv62.at<0>() == -2033.0);
	REQUIRE(mv62.at<1>() == -1957.0);
	REQUIRE(mv62.at<2>() == 1919.0);
	REQUIRE(mv62.at<3>() == 1843.0);

	mv2<0,1,2,3> mv63 = hep::inner_prod(std::get<6>(lhs), std::get<3>(rhs));

	REQUIRE(mv63.at<0>() == 12159.0);
	REQUIRE(mv63.at<1>() == 12315.0);
	REQUIRE(mv63.at<2>() == 3595.0);
	REQUIRE(mv63.at<3>() == 3959.0);

	mv2<0,1,2,3> mv64 = hep::inner_prod(std::get<6>(lhs), std::get<4>(rhs));

	REQUIRE(mv64.at<0>() == -804.0);
	REQUIRE(mv64.at<1>() == -324.0);
	REQUIRE(mv64.at<2>() == 12238.0);
	REQUIRE(mv64.at<3>() == 12230.0);

	mv2<0,1,2,3> mv65 = hep::inner_prod(std::get<6>(lhs), std::get<5>(rhs));

	REQUIRE(mv65.at<0>() == 7005.0);
	REQUIRE(mv65.at<1>() == 7377.0);
	REQUIRE(mv65.at<2>() == 8587.0);
	REQUIRE(mv65.at<3>() == 8633.0);

	mv2<0,1,2,3> mv66 = hep::inner_prod(std::get<6>(lhs), std::get<6>(rhs));

	REQUIRE(mv66.at<0>() == 21050.0);
	REQUIRE(mv66.at<1>() == 22066.0);
	REQUIRE(mv66.at<2>() == 24686.0);
	REQUIRE(mv66.at<3>() == 24370.0);
}
