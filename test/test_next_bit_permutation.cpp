#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main()
#include "catch.hpp"

#include <tuple>
#include <hep/ga/utils/next_bit_permutation.hpp>

TEST_CASE("next_bit_permutation_1_bit")
{
	REQUIRE(hep::next_bit_permutation(1) == 2);
	REQUIRE(hep::next_bit_permutation(2) == 4);
	REQUIRE(hep::next_bit_permutation(4) == 8);
	REQUIRE(hep::next_bit_permutation(8) == 16);
	REQUIRE(hep::next_bit_permutation(16) == 32);
	REQUIRE(hep::next_bit_permutation(32) == 64);
	REQUIRE(hep::next_bit_permutation(64) == 128);
}

TEST_CASE("next_bit_permutation_2_bits")
{
	REQUIRE(hep::next_bit_permutation(3) == 5);
	REQUIRE(hep::next_bit_permutation(5) == 6);
	REQUIRE(hep::next_bit_permutation(6) == 9);
	REQUIRE(hep::next_bit_permutation(9) == 10);
	REQUIRE(hep::next_bit_permutation(10) == 12);
	REQUIRE(hep::next_bit_permutation(12) == 17);
	REQUIRE(hep::next_bit_permutation(17) == 18);
	REQUIRE(hep::next_bit_permutation(18) == 20);
	REQUIRE(hep::next_bit_permutation(20) == 24);
	REQUIRE(hep::next_bit_permutation(24) == 33);
	REQUIRE(hep::next_bit_permutation(33) == 34);
	REQUIRE(hep::next_bit_permutation(34) == 36);
	REQUIRE(hep::next_bit_permutation(36) == 40);
	REQUIRE(hep::next_bit_permutation(40) == 48);
	REQUIRE(hep::next_bit_permutation(48) == 65);
	REQUIRE(hep::next_bit_permutation(65) == 66);
	REQUIRE(hep::next_bit_permutation(66) == 68);
	REQUIRE(hep::next_bit_permutation(68) == 72);
	REQUIRE(hep::next_bit_permutation(72) == 80);
	REQUIRE(hep::next_bit_permutation(80) == 96);
	REQUIRE(hep::next_bit_permutation(96) == 129);
	REQUIRE(hep::next_bit_permutation(129) == 130);
	REQUIRE(hep::next_bit_permutation(130) == 132);
	REQUIRE(hep::next_bit_permutation(132) == 136);
	REQUIRE(hep::next_bit_permutation(136) == 144);
	REQUIRE(hep::next_bit_permutation(144) == 160);
	REQUIRE(hep::next_bit_permutation(160) == 192);
}

TEST_CASE("next_bit_permutation_3_bits")
{
	REQUIRE(hep::next_bit_permutation(7) == 11);
	REQUIRE(hep::next_bit_permutation(11) == 13);
	REQUIRE(hep::next_bit_permutation(13) == 14);
	REQUIRE(hep::next_bit_permutation(14) == 19);
	REQUIRE(hep::next_bit_permutation(19) == 21);
	REQUIRE(hep::next_bit_permutation(21) == 22);
	REQUIRE(hep::next_bit_permutation(22) == 25);
	REQUIRE(hep::next_bit_permutation(25) == 26);
	REQUIRE(hep::next_bit_permutation(26) == 28);
	REQUIRE(hep::next_bit_permutation(28) == 35);
	REQUIRE(hep::next_bit_permutation(35) == 37);
	REQUIRE(hep::next_bit_permutation(37) == 38);
	REQUIRE(hep::next_bit_permutation(38) == 41);
	REQUIRE(hep::next_bit_permutation(41) == 42);
	REQUIRE(hep::next_bit_permutation(42) == 44);
	REQUIRE(hep::next_bit_permutation(44) == 49);
	REQUIRE(hep::next_bit_permutation(49) == 50);
	REQUIRE(hep::next_bit_permutation(50) == 52);
	REQUIRE(hep::next_bit_permutation(52) == 56);
	REQUIRE(hep::next_bit_permutation(56) == 67);
	REQUIRE(hep::next_bit_permutation(67) == 69);
	REQUIRE(hep::next_bit_permutation(69) == 70);
	REQUIRE(hep::next_bit_permutation(70) == 73);
	REQUIRE(hep::next_bit_permutation(73) == 74);
	REQUIRE(hep::next_bit_permutation(74) == 76);
	REQUIRE(hep::next_bit_permutation(76) == 81);
	REQUIRE(hep::next_bit_permutation(81) == 82);
	REQUIRE(hep::next_bit_permutation(82) == 84);
	REQUIRE(hep::next_bit_permutation(84) == 88);
	REQUIRE(hep::next_bit_permutation(88) == 97);
	REQUIRE(hep::next_bit_permutation(97) == 98);
	REQUIRE(hep::next_bit_permutation(98) == 100);
	REQUIRE(hep::next_bit_permutation(100) == 104);
	REQUIRE(hep::next_bit_permutation(104) == 112);
	REQUIRE(hep::next_bit_permutation(112) == 131);
	REQUIRE(hep::next_bit_permutation(131) == 133);
	REQUIRE(hep::next_bit_permutation(133) == 134);
	REQUIRE(hep::next_bit_permutation(134) == 137);
	REQUIRE(hep::next_bit_permutation(137) == 138);
	REQUIRE(hep::next_bit_permutation(138) == 140);
	REQUIRE(hep::next_bit_permutation(140) == 145);
	REQUIRE(hep::next_bit_permutation(145) == 146);
	REQUIRE(hep::next_bit_permutation(146) == 148);
	REQUIRE(hep::next_bit_permutation(148) == 152);
	REQUIRE(hep::next_bit_permutation(152) == 161);
	REQUIRE(hep::next_bit_permutation(161) == 162);
	REQUIRE(hep::next_bit_permutation(162) == 164);
	REQUIRE(hep::next_bit_permutation(164) == 168);
	REQUIRE(hep::next_bit_permutation(168) == 176);
	REQUIRE(hep::next_bit_permutation(176) == 193);
	REQUIRE(hep::next_bit_permutation(193) == 194);
	REQUIRE(hep::next_bit_permutation(194) == 196);
	REQUIRE(hep::next_bit_permutation(196) == 200);
	REQUIRE(hep::next_bit_permutation(200) == 208);
	REQUIRE(hep::next_bit_permutation(208) == 224);
}

TEST_CASE("next_bit_permutation_4_bits")
{
	REQUIRE(hep::next_bit_permutation(15) == 23);
	REQUIRE(hep::next_bit_permutation(23) == 27);
	REQUIRE(hep::next_bit_permutation(27) == 29);
	REQUIRE(hep::next_bit_permutation(29) == 30);
	REQUIRE(hep::next_bit_permutation(30) == 39);
	REQUIRE(hep::next_bit_permutation(39) == 43);
	REQUIRE(hep::next_bit_permutation(43) == 45);
	REQUIRE(hep::next_bit_permutation(45) == 46);
	REQUIRE(hep::next_bit_permutation(46) == 51);
	REQUIRE(hep::next_bit_permutation(51) == 53);
	REQUIRE(hep::next_bit_permutation(53) == 54);
	REQUIRE(hep::next_bit_permutation(54) == 57);
	REQUIRE(hep::next_bit_permutation(57) == 58);
	REQUIRE(hep::next_bit_permutation(58) == 60);
	REQUIRE(hep::next_bit_permutation(60) == 71);
	REQUIRE(hep::next_bit_permutation(71) == 75);
	REQUIRE(hep::next_bit_permutation(75) == 77);
	REQUIRE(hep::next_bit_permutation(77) == 78);
	REQUIRE(hep::next_bit_permutation(78) == 83);
	REQUIRE(hep::next_bit_permutation(83) == 85);
	REQUIRE(hep::next_bit_permutation(85) == 86);
	REQUIRE(hep::next_bit_permutation(86) == 89);
	REQUIRE(hep::next_bit_permutation(89) == 90);
	REQUIRE(hep::next_bit_permutation(90) == 92);
	REQUIRE(hep::next_bit_permutation(92) == 99);
	REQUIRE(hep::next_bit_permutation(99) == 101);
	REQUIRE(hep::next_bit_permutation(101) == 102);
	REQUIRE(hep::next_bit_permutation(102) == 105);
	REQUIRE(hep::next_bit_permutation(105) == 106);
	REQUIRE(hep::next_bit_permutation(106) == 108);
	REQUIRE(hep::next_bit_permutation(108) == 113);
	REQUIRE(hep::next_bit_permutation(113) == 114);
	REQUIRE(hep::next_bit_permutation(114) == 116);
	REQUIRE(hep::next_bit_permutation(116) == 120);
	REQUIRE(hep::next_bit_permutation(120) == 135);
	REQUIRE(hep::next_bit_permutation(135) == 139);
	REQUIRE(hep::next_bit_permutation(139) == 141);
	REQUIRE(hep::next_bit_permutation(141) == 142);
	REQUIRE(hep::next_bit_permutation(142) == 147);
	REQUIRE(hep::next_bit_permutation(147) == 149);
	REQUIRE(hep::next_bit_permutation(149) == 150);
	REQUIRE(hep::next_bit_permutation(150) == 153);
	REQUIRE(hep::next_bit_permutation(153) == 154);
	REQUIRE(hep::next_bit_permutation(154) == 156);
	REQUIRE(hep::next_bit_permutation(156) == 163);
	REQUIRE(hep::next_bit_permutation(163) == 165);
	REQUIRE(hep::next_bit_permutation(165) == 166);
	REQUIRE(hep::next_bit_permutation(166) == 169);
	REQUIRE(hep::next_bit_permutation(169) == 170);
	REQUIRE(hep::next_bit_permutation(170) == 172);
	REQUIRE(hep::next_bit_permutation(172) == 177);
	REQUIRE(hep::next_bit_permutation(177) == 178);
	REQUIRE(hep::next_bit_permutation(178) == 180);
	REQUIRE(hep::next_bit_permutation(180) == 184);
	REQUIRE(hep::next_bit_permutation(184) == 195);
	REQUIRE(hep::next_bit_permutation(195) == 197);
	REQUIRE(hep::next_bit_permutation(197) == 198);
	REQUIRE(hep::next_bit_permutation(198) == 201);
	REQUIRE(hep::next_bit_permutation(201) == 202);
	REQUIRE(hep::next_bit_permutation(202) == 204);
	REQUIRE(hep::next_bit_permutation(204) == 209);
	REQUIRE(hep::next_bit_permutation(209) == 210);
	REQUIRE(hep::next_bit_permutation(210) == 212);
	REQUIRE(hep::next_bit_permutation(212) == 216);
	REQUIRE(hep::next_bit_permutation(216) == 225);
	REQUIRE(hep::next_bit_permutation(225) == 226);
	REQUIRE(hep::next_bit_permutation(226) == 228);
	REQUIRE(hep::next_bit_permutation(228) == 232);
	REQUIRE(hep::next_bit_permutation(232) == 240);
}

TEST_CASE("next_bit_permutation_5_bits")
{
	REQUIRE(hep::next_bit_permutation(31) == 47);
	REQUIRE(hep::next_bit_permutation(47) == 55);
	REQUIRE(hep::next_bit_permutation(55) == 59);
	REQUIRE(hep::next_bit_permutation(59) == 61);
	REQUIRE(hep::next_bit_permutation(61) == 62);
	REQUIRE(hep::next_bit_permutation(62) == 79);
	REQUIRE(hep::next_bit_permutation(79) == 87);
	REQUIRE(hep::next_bit_permutation(87) == 91);
	REQUIRE(hep::next_bit_permutation(91) == 93);
	REQUIRE(hep::next_bit_permutation(93) == 94);
	REQUIRE(hep::next_bit_permutation(94) == 103);
	REQUIRE(hep::next_bit_permutation(103) == 107);
	REQUIRE(hep::next_bit_permutation(107) == 109);
	REQUIRE(hep::next_bit_permutation(109) == 110);
	REQUIRE(hep::next_bit_permutation(110) == 115);
	REQUIRE(hep::next_bit_permutation(115) == 117);
	REQUIRE(hep::next_bit_permutation(117) == 118);
	REQUIRE(hep::next_bit_permutation(118) == 121);
	REQUIRE(hep::next_bit_permutation(121) == 122);
	REQUIRE(hep::next_bit_permutation(122) == 124);
	REQUIRE(hep::next_bit_permutation(124) == 143);
	REQUIRE(hep::next_bit_permutation(143) == 151);
	REQUIRE(hep::next_bit_permutation(151) == 155);
	REQUIRE(hep::next_bit_permutation(155) == 157);
	REQUIRE(hep::next_bit_permutation(157) == 158);
	REQUIRE(hep::next_bit_permutation(158) == 167);
	REQUIRE(hep::next_bit_permutation(167) == 171);
	REQUIRE(hep::next_bit_permutation(171) == 173);
	REQUIRE(hep::next_bit_permutation(173) == 174);
	REQUIRE(hep::next_bit_permutation(174) == 179);
	REQUIRE(hep::next_bit_permutation(179) == 181);
	REQUIRE(hep::next_bit_permutation(181) == 182);
	REQUIRE(hep::next_bit_permutation(182) == 185);
	REQUIRE(hep::next_bit_permutation(185) == 186);
	REQUIRE(hep::next_bit_permutation(186) == 188);
	REQUIRE(hep::next_bit_permutation(188) == 199);
	REQUIRE(hep::next_bit_permutation(199) == 203);
	REQUIRE(hep::next_bit_permutation(203) == 205);
	REQUIRE(hep::next_bit_permutation(205) == 206);
	REQUIRE(hep::next_bit_permutation(206) == 211);
	REQUIRE(hep::next_bit_permutation(211) == 213);
	REQUIRE(hep::next_bit_permutation(213) == 214);
	REQUIRE(hep::next_bit_permutation(214) == 217);
	REQUIRE(hep::next_bit_permutation(217) == 218);
	REQUIRE(hep::next_bit_permutation(218) == 220);
	REQUIRE(hep::next_bit_permutation(220) == 227);
	REQUIRE(hep::next_bit_permutation(227) == 229);
	REQUIRE(hep::next_bit_permutation(229) == 230);
	REQUIRE(hep::next_bit_permutation(230) == 233);
	REQUIRE(hep::next_bit_permutation(233) == 234);
	REQUIRE(hep::next_bit_permutation(234) == 236);
	REQUIRE(hep::next_bit_permutation(236) == 241);
	REQUIRE(hep::next_bit_permutation(241) == 242);
	REQUIRE(hep::next_bit_permutation(242) == 244);
	REQUIRE(hep::next_bit_permutation(244) == 248);
}

TEST_CASE("next_bit_permutation_6_bits")
{
	REQUIRE(hep::next_bit_permutation(63) == 95);
	REQUIRE(hep::next_bit_permutation(95) == 111);
	REQUIRE(hep::next_bit_permutation(111) == 119);
	REQUIRE(hep::next_bit_permutation(119) == 123);
	REQUIRE(hep::next_bit_permutation(123) == 125);
	REQUIRE(hep::next_bit_permutation(125) == 126);
	REQUIRE(hep::next_bit_permutation(126) == 159);
	REQUIRE(hep::next_bit_permutation(159) == 175);
	REQUIRE(hep::next_bit_permutation(175) == 183);
	REQUIRE(hep::next_bit_permutation(183) == 187);
	REQUIRE(hep::next_bit_permutation(187) == 189);
	REQUIRE(hep::next_bit_permutation(189) == 190);
	REQUIRE(hep::next_bit_permutation(190) == 207);
	REQUIRE(hep::next_bit_permutation(207) == 215);
	REQUIRE(hep::next_bit_permutation(215) == 219);
	REQUIRE(hep::next_bit_permutation(219) == 221);
	REQUIRE(hep::next_bit_permutation(221) == 222);
	REQUIRE(hep::next_bit_permutation(222) == 231);
	REQUIRE(hep::next_bit_permutation(231) == 235);
	REQUIRE(hep::next_bit_permutation(235) == 237);
	REQUIRE(hep::next_bit_permutation(237) == 238);
	REQUIRE(hep::next_bit_permutation(238) == 243);
	REQUIRE(hep::next_bit_permutation(243) == 245);
	REQUIRE(hep::next_bit_permutation(245) == 246);
	REQUIRE(hep::next_bit_permutation(246) == 249);
	REQUIRE(hep::next_bit_permutation(249) == 250);
	REQUIRE(hep::next_bit_permutation(250) == 252);
}

TEST_CASE("next_bit_permutation_7_bits")
{
	REQUIRE(hep::next_bit_permutation(127) == 191);
	REQUIRE(hep::next_bit_permutation(191) == 223);
	REQUIRE(hep::next_bit_permutation(223) == 239);
	REQUIRE(hep::next_bit_permutation(239) == 247);
	REQUIRE(hep::next_bit_permutation(247) == 251);
	REQUIRE(hep::next_bit_permutation(251) == 253);
	REQUIRE(hep::next_bit_permutation(253) == 254);
}
