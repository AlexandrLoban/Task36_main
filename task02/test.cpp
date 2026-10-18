#include "test.h"

void test(int number, int expected, string test_name) {
	int actual = count_multiple_digits(number);
	string msg = test_name + " ---> ";
	msg += actual == expected ? "PASS" : "FAIL";

	cout << msg << endl;
}

void run_all_tests() {
	test(123, 1, "test01");
	test(67356, 3, "test02");
	test(238794, 2, "test03");
	test(2184, 0, "test04");
	test(5, 0, "test05");
	test(3333, 4, "test06");
	test(36913, 4, "test07");
}