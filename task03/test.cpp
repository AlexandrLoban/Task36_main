#include "test.h"

void test(int number, int expected, string test_name) {
	int actual = sum_of_odd_digits(number);
	string msg = test_name + " ---> ";
	msg += actual == expected ? "PASS" : "FAIL";

	cout << msg << endl;
}

void run_all_tests() {
	test(123, 4, "test01");
	test(67356, 15, "test02");
	test(238794, 19, "test03");
	test(2184, 1, "test04");
	test(5, 5, "test05");
	test(3333, 12, "test06");
	test(36913, 16, "test07");
}