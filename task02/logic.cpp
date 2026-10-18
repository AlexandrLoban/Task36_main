#include "logic.h"

int count_multiple_digits(int number) {

	int count = 0;
	while (number > 0) {
		int digit = number % 10;
		if (digit % 3 == 0) {
			count++;
		}
		number /= 10;
	}

	return count;
}