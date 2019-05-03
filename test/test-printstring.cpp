#include "Turing-test-head.h"
string print_string(string row)
{
  return row;
}

TEST_CASE("Aga" ,"[AGA]"){
  REQUIRE(print_string("10101001010101") == "10101001010101");
  REQUIRE(print_string("fusdfbsdgbsdgvisdgbvd") == "fusdfbsdgbsdgvisdgbvd");
  REQUIRE(print_string("           ") == "           ");
  REQUIRE(print_string("165+354") == "165+354");
  REQUIRE(print_string("12e(3) 3(2)q1") == "12e(3) 3(2)q1");
  cout << "test is done";
}
