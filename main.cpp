#include <iostream>
#include "lib/matrix/matrix.cpp"


int main()
{
	try
	{
		Array<int> arr1(4);

		std::cout << "Create arr1.\n";
		arr1[0] = 3;
  
		std::cout << "arr1[0] = " << arr1[0] << "\n";
		std::cout << "arr1[1] = " << arr1[1] << "\n";
	}
	catch (std::exception e)
	{
		std::cout << e.what() << "\n";
	}

	return 0;
}
