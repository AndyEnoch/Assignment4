#include <iostream>

int main()
{
	int firstNum, secNum, remainder;

	std::cout << "This program calculates the HCF of two integers.\n";

	std::cout << "Enter the first integer (larger): ";
	std::cin >> firstNum;

	std::cout << "Enter the second integer (smaller): ";
	std::cin >> secNum;
 

	do {
		remainder = firstNum % secNum;

		if ( remainder )
		{
			firstNum = secNum;
			secNum = remainder;
		}

		else std::cout << "The HCF of the two numbers is " << secNum << '\n';
	} while ( remainder );
}
