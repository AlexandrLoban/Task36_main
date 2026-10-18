#include "logic.h"

int sum_of_odd_digits(int number) {

	int sum = 0;
	while (number > 0) {
		int digit = number % 10;
		if (digit % 2 != 0) {
			sum+= digit;
		}
		number /= 10;
	}

	return sum;
}