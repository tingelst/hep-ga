#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main()
#include "catch.hpp"

#include <hep/ga/utils/pop_count.hpp>

TEST_CASE("pop_count_0_bits")
{
	REQUIRE(hep::pop_count(0) == 0);
}

TEST_CASE("pop_count_1_bit")
{
	REQUIRE(hep::pop_count(1) == 1);
	REQUIRE(hep::pop_count(2) == 1);
	REQUIRE(hep::pop_count(4) == 1);
	REQUIRE(hep::pop_count(8) == 1);
	REQUIRE(hep::pop_count(16) == 1);
	REQUIRE(hep::pop_count(32) == 1);
	REQUIRE(hep::pop_count(64) == 1);
	REQUIRE(hep::pop_count(128) == 1);
}

TEST_CASE("pop_count_2_bits")
{
	REQUIRE(hep::pop_count(3) == 2);
	REQUIRE(hep::pop_count(5) == 2);
	REQUIRE(hep::pop_count(6) == 2);
	REQUIRE(hep::pop_count(9) == 2);
	REQUIRE(hep::pop_count(10) == 2);
	REQUIRE(hep::pop_count(12) == 2);
	REQUIRE(hep::pop_count(17) == 2);
	REQUIRE(hep::pop_count(18) == 2);
	REQUIRE(hep::pop_count(20) == 2);
	REQUIRE(hep::pop_count(24) == 2);
	REQUIRE(hep::pop_count(33) == 2);
	REQUIRE(hep::pop_count(34) == 2);
	REQUIRE(hep::pop_count(36) == 2);
	REQUIRE(hep::pop_count(40) == 2);
	REQUIRE(hep::pop_count(48) == 2);
	REQUIRE(hep::pop_count(65) == 2);
	REQUIRE(hep::pop_count(66) == 2);
	REQUIRE(hep::pop_count(68) == 2);
	REQUIRE(hep::pop_count(72) == 2);
	REQUIRE(hep::pop_count(80) == 2);
	REQUIRE(hep::pop_count(96) == 2);
	REQUIRE(hep::pop_count(129) == 2);
	REQUIRE(hep::pop_count(130) == 2);
	REQUIRE(hep::pop_count(132) == 2);
	REQUIRE(hep::pop_count(136) == 2);
	REQUIRE(hep::pop_count(144) == 2);
	REQUIRE(hep::pop_count(160) == 2);
	REQUIRE(hep::pop_count(192) == 2);
}

TEST_CASE("pop_count_3_bits")
{
	REQUIRE(hep::pop_count(7) == 3);
	REQUIRE(hep::pop_count(11) == 3);
	REQUIRE(hep::pop_count(13) == 3);
	REQUIRE(hep::pop_count(14) == 3);
	REQUIRE(hep::pop_count(19) == 3);
	REQUIRE(hep::pop_count(21) == 3);
	REQUIRE(hep::pop_count(22) == 3);
	REQUIRE(hep::pop_count(25) == 3);
	REQUIRE(hep::pop_count(26) == 3);
	REQUIRE(hep::pop_count(28) == 3);
	REQUIRE(hep::pop_count(35) == 3);
	REQUIRE(hep::pop_count(37) == 3);
	REQUIRE(hep::pop_count(38) == 3);
	REQUIRE(hep::pop_count(41) == 3);
	REQUIRE(hep::pop_count(42) == 3);
	REQUIRE(hep::pop_count(44) == 3);
	REQUIRE(hep::pop_count(49) == 3);
	REQUIRE(hep::pop_count(50) == 3);
	REQUIRE(hep::pop_count(52) == 3);
	REQUIRE(hep::pop_count(56) == 3);
	REQUIRE(hep::pop_count(67) == 3);
	REQUIRE(hep::pop_count(69) == 3);
	REQUIRE(hep::pop_count(70) == 3);
	REQUIRE(hep::pop_count(73) == 3);
	REQUIRE(hep::pop_count(74) == 3);
	REQUIRE(hep::pop_count(76) == 3);
	REQUIRE(hep::pop_count(81) == 3);
	REQUIRE(hep::pop_count(82) == 3);
	REQUIRE(hep::pop_count(84) == 3);
	REQUIRE(hep::pop_count(88) == 3);
	REQUIRE(hep::pop_count(97) == 3);
	REQUIRE(hep::pop_count(98) == 3);
	REQUIRE(hep::pop_count(100) == 3);
	REQUIRE(hep::pop_count(104) == 3);
	REQUIRE(hep::pop_count(112) == 3);
	REQUIRE(hep::pop_count(131) == 3);
	REQUIRE(hep::pop_count(133) == 3);
	REQUIRE(hep::pop_count(134) == 3);
	REQUIRE(hep::pop_count(137) == 3);
	REQUIRE(hep::pop_count(138) == 3);
	REQUIRE(hep::pop_count(140) == 3);
	REQUIRE(hep::pop_count(145) == 3);
	REQUIRE(hep::pop_count(146) == 3);
	REQUIRE(hep::pop_count(148) == 3);
	REQUIRE(hep::pop_count(152) == 3);
	REQUIRE(hep::pop_count(161) == 3);
	REQUIRE(hep::pop_count(162) == 3);
	REQUIRE(hep::pop_count(164) == 3);
	REQUIRE(hep::pop_count(168) == 3);
	REQUIRE(hep::pop_count(176) == 3);
	REQUIRE(hep::pop_count(193) == 3);
	REQUIRE(hep::pop_count(194) == 3);
	REQUIRE(hep::pop_count(196) == 3);
	REQUIRE(hep::pop_count(200) == 3);
	REQUIRE(hep::pop_count(208) == 3);
	REQUIRE(hep::pop_count(224) == 3);
}

TEST_CASE("pop_count_4_bits")
{
	REQUIRE(hep::pop_count(15) == 4);
	REQUIRE(hep::pop_count(23) == 4);
	REQUIRE(hep::pop_count(27) == 4);
	REQUIRE(hep::pop_count(29) == 4);
	REQUIRE(hep::pop_count(30) == 4);
	REQUIRE(hep::pop_count(39) == 4);
	REQUIRE(hep::pop_count(43) == 4);
	REQUIRE(hep::pop_count(45) == 4);
	REQUIRE(hep::pop_count(46) == 4);
	REQUIRE(hep::pop_count(51) == 4);
	REQUIRE(hep::pop_count(53) == 4);
	REQUIRE(hep::pop_count(54) == 4);
	REQUIRE(hep::pop_count(57) == 4);
	REQUIRE(hep::pop_count(58) == 4);
	REQUIRE(hep::pop_count(60) == 4);
	REQUIRE(hep::pop_count(71) == 4);
	REQUIRE(hep::pop_count(75) == 4);
	REQUIRE(hep::pop_count(77) == 4);
	REQUIRE(hep::pop_count(78) == 4);
	REQUIRE(hep::pop_count(83) == 4);
	REQUIRE(hep::pop_count(85) == 4);
	REQUIRE(hep::pop_count(86) == 4);
	REQUIRE(hep::pop_count(89) == 4);
	REQUIRE(hep::pop_count(90) == 4);
	REQUIRE(hep::pop_count(92) == 4);
	REQUIRE(hep::pop_count(99) == 4);
	REQUIRE(hep::pop_count(101) == 4);
	REQUIRE(hep::pop_count(102) == 4);
	REQUIRE(hep::pop_count(105) == 4);
	REQUIRE(hep::pop_count(106) == 4);
	REQUIRE(hep::pop_count(108) == 4);
	REQUIRE(hep::pop_count(113) == 4);
	REQUIRE(hep::pop_count(114) == 4);
	REQUIRE(hep::pop_count(116) == 4);
	REQUIRE(hep::pop_count(120) == 4);
	REQUIRE(hep::pop_count(135) == 4);
	REQUIRE(hep::pop_count(139) == 4);
	REQUIRE(hep::pop_count(141) == 4);
	REQUIRE(hep::pop_count(142) == 4);
	REQUIRE(hep::pop_count(147) == 4);
	REQUIRE(hep::pop_count(149) == 4);
	REQUIRE(hep::pop_count(150) == 4);
	REQUIRE(hep::pop_count(153) == 4);
	REQUIRE(hep::pop_count(154) == 4);
	REQUIRE(hep::pop_count(156) == 4);
	REQUIRE(hep::pop_count(163) == 4);
	REQUIRE(hep::pop_count(165) == 4);
	REQUIRE(hep::pop_count(166) == 4);
	REQUIRE(hep::pop_count(169) == 4);
	REQUIRE(hep::pop_count(170) == 4);
	REQUIRE(hep::pop_count(172) == 4);
	REQUIRE(hep::pop_count(177) == 4);
	REQUIRE(hep::pop_count(178) == 4);
	REQUIRE(hep::pop_count(180) == 4);
	REQUIRE(hep::pop_count(184) == 4);
	REQUIRE(hep::pop_count(195) == 4);
	REQUIRE(hep::pop_count(197) == 4);
	REQUIRE(hep::pop_count(198) == 4);
	REQUIRE(hep::pop_count(201) == 4);
	REQUIRE(hep::pop_count(202) == 4);
	REQUIRE(hep::pop_count(204) == 4);
	REQUIRE(hep::pop_count(209) == 4);
	REQUIRE(hep::pop_count(210) == 4);
	REQUIRE(hep::pop_count(212) == 4);
	REQUIRE(hep::pop_count(216) == 4);
	REQUIRE(hep::pop_count(225) == 4);
	REQUIRE(hep::pop_count(226) == 4);
	REQUIRE(hep::pop_count(228) == 4);
	REQUIRE(hep::pop_count(232) == 4);
	REQUIRE(hep::pop_count(240) == 4);
}

TEST_CASE("pop_count_5_bits")
{
	REQUIRE(hep::pop_count(31) == 5);
	REQUIRE(hep::pop_count(47) == 5);
	REQUIRE(hep::pop_count(55) == 5);
	REQUIRE(hep::pop_count(59) == 5);
	REQUIRE(hep::pop_count(61) == 5);
	REQUIRE(hep::pop_count(62) == 5);
	REQUIRE(hep::pop_count(79) == 5);
	REQUIRE(hep::pop_count(87) == 5);
	REQUIRE(hep::pop_count(91) == 5);
	REQUIRE(hep::pop_count(93) == 5);
	REQUIRE(hep::pop_count(94) == 5);
	REQUIRE(hep::pop_count(103) == 5);
	REQUIRE(hep::pop_count(107) == 5);
	REQUIRE(hep::pop_count(109) == 5);
	REQUIRE(hep::pop_count(110) == 5);
	REQUIRE(hep::pop_count(115) == 5);
	REQUIRE(hep::pop_count(117) == 5);
	REQUIRE(hep::pop_count(118) == 5);
	REQUIRE(hep::pop_count(121) == 5);
	REQUIRE(hep::pop_count(122) == 5);
	REQUIRE(hep::pop_count(124) == 5);
	REQUIRE(hep::pop_count(143) == 5);
	REQUIRE(hep::pop_count(151) == 5);
	REQUIRE(hep::pop_count(155) == 5);
	REQUIRE(hep::pop_count(157) == 5);
	REQUIRE(hep::pop_count(158) == 5);
	REQUIRE(hep::pop_count(167) == 5);
	REQUIRE(hep::pop_count(171) == 5);
	REQUIRE(hep::pop_count(173) == 5);
	REQUIRE(hep::pop_count(174) == 5);
	REQUIRE(hep::pop_count(179) == 5);
	REQUIRE(hep::pop_count(181) == 5);
	REQUIRE(hep::pop_count(182) == 5);
	REQUIRE(hep::pop_count(185) == 5);
	REQUIRE(hep::pop_count(186) == 5);
	REQUIRE(hep::pop_count(188) == 5);
	REQUIRE(hep::pop_count(199) == 5);
	REQUIRE(hep::pop_count(203) == 5);
	REQUIRE(hep::pop_count(205) == 5);
	REQUIRE(hep::pop_count(206) == 5);
	REQUIRE(hep::pop_count(211) == 5);
	REQUIRE(hep::pop_count(213) == 5);
	REQUIRE(hep::pop_count(214) == 5);
	REQUIRE(hep::pop_count(217) == 5);
	REQUIRE(hep::pop_count(218) == 5);
	REQUIRE(hep::pop_count(220) == 5);
	REQUIRE(hep::pop_count(227) == 5);
	REQUIRE(hep::pop_count(229) == 5);
	REQUIRE(hep::pop_count(230) == 5);
	REQUIRE(hep::pop_count(233) == 5);
	REQUIRE(hep::pop_count(234) == 5);
	REQUIRE(hep::pop_count(236) == 5);
	REQUIRE(hep::pop_count(241) == 5);
	REQUIRE(hep::pop_count(242) == 5);
	REQUIRE(hep::pop_count(244) == 5);
	REQUIRE(hep::pop_count(248) == 5);
}

TEST_CASE("pop_count_6_bits")
{
	REQUIRE(hep::pop_count(63) == 6);
	REQUIRE(hep::pop_count(95) == 6);
	REQUIRE(hep::pop_count(111) == 6);
	REQUIRE(hep::pop_count(119) == 6);
	REQUIRE(hep::pop_count(123) == 6);
	REQUIRE(hep::pop_count(125) == 6);
	REQUIRE(hep::pop_count(126) == 6);
	REQUIRE(hep::pop_count(159) == 6);
	REQUIRE(hep::pop_count(175) == 6);
	REQUIRE(hep::pop_count(183) == 6);
	REQUIRE(hep::pop_count(187) == 6);
	REQUIRE(hep::pop_count(189) == 6);
	REQUIRE(hep::pop_count(190) == 6);
	REQUIRE(hep::pop_count(207) == 6);
	REQUIRE(hep::pop_count(215) == 6);
	REQUIRE(hep::pop_count(219) == 6);
	REQUIRE(hep::pop_count(221) == 6);
	REQUIRE(hep::pop_count(222) == 6);
	REQUIRE(hep::pop_count(231) == 6);
	REQUIRE(hep::pop_count(235) == 6);
	REQUIRE(hep::pop_count(237) == 6);
	REQUIRE(hep::pop_count(238) == 6);
	REQUIRE(hep::pop_count(243) == 6);
	REQUIRE(hep::pop_count(245) == 6);
	REQUIRE(hep::pop_count(246) == 6);
	REQUIRE(hep::pop_count(249) == 6);
	REQUIRE(hep::pop_count(250) == 6);
	REQUIRE(hep::pop_count(252) == 6);
}

TEST_CASE("pop_count_7_bits")
{
	REQUIRE(hep::pop_count(127) == 7);
	REQUIRE(hep::pop_count(191) == 7);
	REQUIRE(hep::pop_count(223) == 7);
	REQUIRE(hep::pop_count(239) == 7);
	REQUIRE(hep::pop_count(247) == 7);
	REQUIRE(hep::pop_count(251) == 7);
	REQUIRE(hep::pop_count(253) == 7);
	REQUIRE(hep::pop_count(254) == 7);
}

TEST_CASE("pop_count_8_bits")
{
	REQUIRE(hep::pop_count(255) == 8);
}
