#include <iostream>
#include <cmath>

int max(int num1, int num2)
{
	if (num1 > num2) {
		return num1;
	}
	return num2;
}
//ax+b=0
double calculate(double a, double b)
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
	return (-b + sqrt(D))/2;
}
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
				
}*/
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int D = 0;
	std::cout << "Enter first value" << std::endl;
	std::cin >> a;
	if (std::cin.fail()){
		std::cout << "First is not a number" <<std::endl;
		return EXIT_FAILURE;
	}
	std::cout << "Enter second value" << std::endl;
	std::cin >> b;
	if (std::cin.fail()){
		std::cout << "Second is not a number" << std::endl;
		return EXIT_FAILURE;
	}

	std::cout << "Enter third value" << std::endl;
	std::cin >> c;
	if (std::cin.fail()){
		std::cout << "Third is not a number" << std::endl;
		return EXIT_FAILURE;

	}

	double x = calculate (a, b);
	std::cout << "The solution is " << x << std::endl;
	


	D = (b*b) - (4*a*c);
	if ( D < 0)
	{
		std::cout << "No solution" << std::endl;
		return EXIT_FAILURE;
	}


	double x1 = calculate_square (D, b);
	std::cout <<"The solution is " << x1 << std::endl;
	

	double x2 = calculate_square_other (D, b);
	std::cout <<"The solution is " << x2 << std::endl;
	return EXIT_SUCCESS;

}
