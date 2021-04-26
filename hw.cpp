#include <stdio.h>

int numberFibonacci (int number, int a, int b)
{
	a = 0;
	b = 1;
	int sum = 0;
	int temp = 0;
	while ( b <= number )
	{
		sum = b + sum;
		temp = a + b;
		a = b;
		b = temp;
		
	}
	printf ("The sum is %d\n" , sum);
	return sum;

}

int main()
{
	int n;
	printf ("Enter your age: ");
	scanf("%d", &n);
	printf ("My age is %d\n" , n);
	int x;
	int y;

	numberFibonacci(n,x,y);

}

