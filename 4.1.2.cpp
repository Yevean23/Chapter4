#include <iostream>

/*
Exercises Section 4.1.2
Exercise 4.1: What is the value returned by 5 + 10 * 20/2?
Exercise 4.2: Using Table 4.12 (p. 166), parenthesize the following
expressions to indicate the order in which the operands are grouped:
(a) * vec.begin()
(b) * vec.begin() + 1
*/

int main1() {

	// 4.1 105
	std::cout << (5 + 10 * 20 / 2) << std::endl;

	// 4.2
	// (a) *(vec.begin())
	// (b) (*(vec.begin()) + 1)


	return 0;
}