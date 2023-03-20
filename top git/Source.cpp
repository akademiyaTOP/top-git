#include <iostream>
#include "Header.h"

int main()
{
	int a(5);
	const int b(3);
	std::cout << a << std::endl;
	std::cout << "Hallo World\n";


	function(a, b);

	std::cout << a << "  " << b << std::endl;
	std::cout << "Hallo\n";

	function(a, b);

}