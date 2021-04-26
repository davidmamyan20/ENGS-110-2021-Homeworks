//#include <iostream>
//#include <cmath>

/*void swap(int& num1, int& num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}*/
//ax+b=0
/*double calculate(double a, double b)
{
	return -b / a;
}
//ax2+bx+c=0;
double calculate_square(double D, double b)
{
	return (-b - sqrt(D))/2;
}
double calculate_square_other(double D, double b)
{
	return (-b + sqrt(D))/2;*/
//}
/*double calculate_square(double a, double b, double c)
{
	int D = b*b - 4*a*c;
	int x1 = 0;
	int x2 = 0;
	if (D >= 0)
	{
		x1 = (-b - sqrt(D))/2;
		x2 = (-b + sqrt(D))/2;
		return x1;
		return x2;
				}
				std::cout << "No solution" << std::endl;
				return EXIT_FAILURE;
				
*/
//	int y = 0;
//	int c = 0;
//	int D = 0;
/*	std::cout << "Enter first value" << std::endl;
	std::cin >> x;
	if (std::cin.fail()){
		std::cout << "First is not a number" <<std::endl;
		return EXIT_FAILURE;
	}
	std::cout << "Enter second value" << std::endl;
	std::cin >> y;
		if (std::cin.fail()){
		std::cout << "Second is not a number" << std::endl;
		return EXIT_FAILURE;
*/		
//	std::cout << "Enter third value" << std::endl;
//	std::cin >> c;
//	if (std::cin.fail()){
//		std::cout << "Third is not a number" << std::endl;
//		return EXIT_FAILURE;
//
//	}

//	double x = calculate (a, b);
//	std::cout << "The solution is " << x << std::endl;
	


//	D = (b*b) - (4*a*c);
//	if ( D < 0)
//	{
//		std::cout << "No solution" << std::endl;
//		return EXIT_FAILURE;
//	}


//	double x1 = calculate_square (D, b);
//	std::cout <<"The solution is " << x1 << std::endl;
	

//	double x2 = calculate_square_other (D, b);
//	std::cout <<"The solution is " << x2 << std::endl;
//	return EXIT_SUCCESS;
/*	std::cout << "Before swap x = " << x << " y = " << y << std::endl;
	swap(x, y);
	std::cout << "x =  " << x << " y = " << y << std::endl;*/
/*	int& z = x;
	z = 67;
	std::cout << "before x = " << x << "z = " << z << std::endl;
	std::cout << "after x = " << x << " z = " << z << std::endl;

	return EXIT_SUCCESS;

}*/



#include <iostream>

int global_variable = 0;

void swap (int& num1, int& num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
	
}

int maximum = 0;

void max(const int& a, const int&b)
{
	if ( a > b ) {
		int c = a;
		 maximum = a;
	} else {
		 maximum = b;
	}
}

int main()
{
	int x = 45;
	int y = 63;
//	std::cout << "Value of x is " << x 
//		<< " address of x is " <<
//	std::cout << "Before swap x = " << x << " y = " << y << std::endl;
	int m =	max (x, y);
	std::cout << "Maximum is " << m << std::endl;
	return EXIT_SUCCESS;
}
//	std::cout << "After swap x =" << x << "y = " << y << std::endl;
//	const int& z = x;


