#include <iostream>

/*

Exercises Section 4.1.3

Exercise 4.3: Order of evaluation for most of the binary operators is left
undefined to give the compiler opportunities for optimization. This strategy
presents a trade-off between efficient code generation and potential pitfalls in
the use of the language by the programmer. Do you consider that an
acceptable trade-off? Why or why not?
	
*/


void foo(unsigned short x)
{
	std::cout << "x is an unsigned short" << std::endl;
}

void foo(int x)
{
	std::cout << "x is an int" << std::endl;
}

int main2() {

	// 4.3
	/*
	Undefined behavior is undesired, especially since it is so easy to define a universal standard. 
	However, a programmer can have the code behave exactly as they intend by writing it out in several lines, or
	using parenthesization.
	So as long as the places where the undefined behaviour would occur are well documented, then I'd consider the
	trade off worth it.
	*/


	
	return 0;
}
