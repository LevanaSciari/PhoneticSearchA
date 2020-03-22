#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;



TEST_CASE("Test replacement of v and w"){
    string text = "i wear vest white";
    
    CHECK(find(text,"wear") == string("wear"));
    CHECK(find(text,"reaw") == string("wear"));
    CHECK(find(text,"rear") == string("wear"));
    CHECK(find(text,"weaw") == string("wear"));
    CHECK(find(text,"vhite") == string("white"));
}


TEST_CASE("Test replacement of b, f and p")
{
    string text = "badp fbpf pief bad";

    CHECK(find(text, "badp") == string("badp"));
    CHECK(find(text, "fadb") == string("badp"));
    CHECK(find(text, "pad") == string("bad"));
    CHECK(find(text, "bbbb") == string("fbpf"));
    CHECK(find(text, "pief") == string("pief"));
    CHECK(find(text, "fief") == string("pief"));
    CHECK(find(text, "fad") == string("bad"));
    
}

TEST_CASE("g and j")
{
    string text = "girl jumg on the glass ";
	 CHECK(find(text, "girl") == string("girl"));
     CHECK(find(text, "jirl") == string("girl"));

	//
	CHECK(find(text, "jumg") == string("jumg"));
    CHECK(find(text, "gumg") == string("jumg"));
    CHECK(find(text, "jumj") == string("jumg"));
    CHECK(find(text, "gumj") == string("jumg"));


	//
    CHECK(find(text, "jlass") == string("glass"));
    CHECK(find(text, "glass") == string("glass"));

	

}

TEST_CASE("Test replacement of i and y ,also of  lower-case and upper-case") {

    string text = "I  yIsk eliorbeautifuleyes";
    
    CHECK(find(text, "I  yIsk eliorbeautifuleyes") == string("I  yIsk eliorbeautifuleyes"));
    CHECK(find(text, "Yisk") == string("yIsk"));
    CHECK(find(text, "Iisk") == string("yIsk"));
    CHECK(find(text, "elyorbeautYfuleIes") == string("eliorbeautifuleyes"));
    CHECK(find(text, "Y")== string("I"));
    CHECK(find(text, "YYSK") == string("yIsk"));
    
   
}
TEST_CASE("Test replacement of d and t ,also of  lower-case and upper-case") {
    string text = "xxx dentyrit yyy";
            CHECK(find(text, "TenTyriD") == string("dentyrit"));
            CHECK(find(text, "DenDyriT") == string("dentyrit"));
            CHECK(find(text, "tenTyrid") == string("dentyrit"));
            CHECK(find(text, "DentyriT") == string("dentyrit"));
           

}

TEST_CASE("Test for ALL kinds of replacement") {

    string text = "xxx vafoudik yyy";

            CHECK(find(text, "vafoudik") == string("vafoudik"));
            CHECK(find(text, "VaPUOtyK") == string("vafoudik"));
            CHECK(find(text, "VAFOUDIK") == string("vafoudik"));
            CHECK(find(text, "vabouDYC") == string("vafoudik"));
            CHECK(find(text, "wAFOUtiQ") == string("vafoudik"));
            CHECK(find(text, "vaPUODyK") == string("vafoudik"));
            CHECK(find(text, "xXX") == string("xxx"));
            CHECK(find(text, "III") == string("yyy"));
            CHECK(find(text, "iYi") == string("yyy"));
            CHECK(find(text, "vafoudiK") == string("vafoudik"));
}
TEST_CASE("Test replacement of lower-case and upper-case") {

    string text = "Happi xxx yyy";

    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    /* Add more checks here */
}
TEST_CASE("Test replacement of lower-case and upper-case") {

    string text = "Happi xxx yyy";

    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    /* Add more checks here */
}
TEST_CASE("Test replacement of lower-case and upper-case") {

    string text = "Happi xxx yyy";

    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    /* Add more checks here */
}
TEST_CASE("Test replacement of lower-case and upper-case") {

    string text = "Happi xxx yyy";

    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    /* Add more checks here */
}