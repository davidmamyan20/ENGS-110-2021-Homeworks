#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	fp = fopen("data.txt", "r");
	if ( fp == NULL)
	{
		printf("Could not open file data.txt");
		return 1;
	}
	
	int *ptr;
	int sum = 0;


	ptr = (int*) malloc(10 * sizeof(int));

	while ( fscanf(fp, "%d", ptr)!= EOF)
	{
		sum = sum +  *ptr;
	}

	printf("Sum = %d\n", sum);

	free(ptr);
	fclose(fp);
	
	return 0;

}
