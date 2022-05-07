#include<iostream>

/*

Exercises Section 4.2

Exercise 4.4: Parenthesize the following expression to show how it is
evaluated. Test your answer by compiling the expression (without
parentheses) and printing its result.
12 / 3 * 4 + 5 * 15 + 24 % 4 / 2

Exercise 4.5: Determine the result of the following expressions.
(a) -30 * 3 + 21 / 5
(b) -30 + 3 * 21 / 5
(c) 30 / 3 * 21 % 5
(d) -30 / 3 * 21 % 4

Exercise 4.6: Write an expression to determine whether an int value is
even or odd.

Exercise 4.7: What does overflow mean? Show three expressions that will
overflow.

*/


int main() {
	// 4.4
	std::cout << ( ( ( ( 12 / 3 ) * 4 ) + ( 5 * 15 ) ) + ( ( 24 % 4 ) / 2 ) ) << std::endl;
	std::cout << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << std::endl;
	// 91

	// 4.5 
	std::cout << 'a' << std::endl;
	// -30 * 3 + 21 / 5; -86
	std::cout << -30 * 3 + 21 / 5 << std::endl;

	std::cout << 'b' << std::endl;
	// -30 + 3 * 21 / 5; -18
	std::cout << -30 + 3 * 21 / 5 << std::endl;

	std::cout << 'c' << std::endl;
	// 30 / 3 * 21 % 5; 0
	std::cout << 30 / 3 * 21 % 5 << std::endl;

	std::cout << 'd' << std::endl;
	// -30 / 3 * 21 % 4; -2
	std::cout << -30 / 3 * 21 % 4 << std::endl;

	return 0;
}