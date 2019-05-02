#include "Turing-test-head.h"
string print_string(string row)
{
	cout << row << endl << endl;
  return row;
}

TEST_CASE("Printstring", "[Print]") {
  REQUIRE(print_string("101010101010101") == "101010101010101");
  REQUIRE(print_string("sdgfksdgvbksfhcbsvfsffalncfano") == "sdgfksdgvbksfhcbsvfsffalncfano");
  REQUIRE(print_string("1265341265345634612534615243651234612") == "1265341265345634612534615243651234612");
  REQUIRE(print_string("Hello world") == "Hello world");
  REQUIRE(print_string("1!12##456&&()!23dqsa") == "1!12##456&&()!23dqsa");
  REQUIRE(print_string("           ") == "           ");
  REQUIRE(print_string("1") == "1");
  REQUIRE(print_string("qw") == "qw");
  REQUIRE(print_string("2d32") == "2d32");
  REQUIRE(print_string("1qw34e5r") == "1qw34e5r");
  REQUIRE(print_string("f56gjy8kv8dhr64f") == "f56gjy8kv8dhr64f");
  REQUIRE(print_string("(qw qw qw qw qw)") == "(qw qw qw qw qw)");
  REQUIRE(print_string("!adasasd(asdas)sdfgsdfgd!") == "!adasasd(asdas)sdfgsdfgd!");
  REQUIRE(print_string("#sdgds(123123123) (!009hfgg)") == "#sdgds(123123123) (!009hfgg)");
  REQUIRE(print_string("3651+123") == "3651+123");
  REQUIRE(print_string("98-1024") == "98-1024");
  cout <<"TEST PRINTSTRING IS SUCCESSFULL!!!";
}
