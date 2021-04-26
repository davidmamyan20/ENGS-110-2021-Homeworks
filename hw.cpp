#include <stdio.h>

int numberFibonacci (int number, int a, int b)
{
	int sum = 0;
	if (number >= 0)
	{
	a = 0;
	b = 1;
	int temp = 0;
	while ( b <= number )
	{
		sum = b + sum;
		temp = a + b;
		a = b;
		b = temp;
		
	}
	printf ("The sum is %d\n", sum);
	}
	else
	{
		printf ("The number is not valid \n");
	}

	return sum;


}

int convert_to_binary (int c, int d, int g)
{
	int f;
	if ( g < 0)
	{
		printf ("Not a valid number\n");
	}
	else
	{
	printf("%d in binary number system is:\n", c);

	for (d = 7; d >= 0; d--)
	{
		f = c >> d;

		if (f & 1)
			printf("1");
		else
			printf("0");
	}
	}
	printf("\n");
	
	return c;
}


int main()
{
	int n;
	printf ("Enter your age: ");
	scanf("%d", &n);
	printf ("My age is %d\n" , n);
	int x;
	int y;

	int z =	numberFibonacci(n,x,y);
	convert_to_binary(z,x,n);

}

