#include <typeinfo>
#include <iostream>
#include "lib/matrix/matrix.cpp"

template <class T>
void matrix_print(Matrix<T>& matrix)
{
	const unsigned int rows = matrix.getRows();
	const unsigned int cols = matrix.getCols();

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			std::cout << typeid(matrix).name() << '[' << i << ']';
			std::cout << '[' << j << ']' << " = " << matrix[i][j] << "\n";
		}
	}
}

int main()
{
	try
	{
		Matrix<int> m1(2, 4);
		Matrix<char> mc(2, 2);

		std::cout << "Create m1(2, 4).\n";
		std::cout << "Create mc(3, 4).\n";
		m1[0][0] = 3;
		m1[1][3] = 4;
		mc[0][0] = 'a';
		mc[0][1] = 'b';
		mc[1][0] = 'c';
		mc[1][1] = 'D';
  
		matrix_print(m1);
		matrix_print(mc);
	}
	catch (std::exception e)
	{
		std::cout << e.what() << "\n";
	}

	return 0;
}
