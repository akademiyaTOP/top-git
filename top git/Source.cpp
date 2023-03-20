#include <iostream>
#include "Header.h"

int main()
{
	int a(5);
	std::cout << a << std::endl;
	std::cout << "Hallo World\n";


	function(a);

	std::cout << a << std::endl;
	std::cout << "Hallo\n";

	function(a);

}