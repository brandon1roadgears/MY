#include "Turing-test-head.h"
int check_error(vector <action> &rules)
{
	if (rules[0].state != "00")
	{
		cout << "Name of first state must be 00!!!" << endl;
		return 0; //             <<----------------------------
	}
	for(long unsigned int i = 0; i < rules.size() - 1; i++)
	{
		if(rules[i].state.length() > 10)
		{
			cout << "Error in line = " << i + 1 << " in state!!! " << endl;
			return 0;
		}
		if(rules[i].exp_symbol.length() > 1)
		{
			cout << "Error in line = " << i + 1 << " in expected_symbol!!! " << endl;
			return 0;
		}
		if(rules[i].new_symb.length() > 1)
		{
			cout << "Error in line = " << i + 1 << " in new symbol!!! " << endl;
			return 0;
		}
		if(rules[i].move.length() > 1)
		{
			cout << "Error in line = " << i + 1 << " in move!!! " << endl;
			return 0;
		}
		if(rules[i].next_state.length() > 10)
		{
			cout << "Error in line = " << i + 1 << " in next state!!!" << endl;
			return 0;
		}
	}
	return 1;
}
TEST_CASE("Check error test:", "[Checkerrortest]"){
	std::vector <action> rules(1);
	rules[0].state = "00";
	rules[0].exp_symbol = "1";
	rules[0].new_symb = "0";
	rules[0].move = "r";
	rules[0].next_state = "01";
	REQUIRE(check_error(rules) == 1);
  cout << endl <<"TEST check_error is done" << endl;
}
