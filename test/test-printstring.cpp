#include "Turing-test-head.h"
int print_string(int row)
{
  return row;
}

TEST_CASE("Aga" ,"[AGA]"){
  REQUIRE(print_string(1) == 1);
  REQUIRE(print_string(2) == 2);
  REQUIRE(print_string(3) == 3);
  REQUIRE(print_string(4) == 4);
  REQUIRE(print_string(5) == 5);
}
