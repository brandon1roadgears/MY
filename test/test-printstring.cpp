#include "Turing-test-head.h"
string print_string(string row)
{
  return row;
}

SCENARIO( "Check function with string return", "[string]" ) {
	GIVEN( "String with some value" ) {
		std::string str_test;
		WHEN("Stings value is..."){
			str_test = "101010101010101";
			THEN("Function should return..."){
				REQUIRE(print_string(str_test) == "101010101010101";
			}
		}
	}
}
