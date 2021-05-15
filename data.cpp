#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char data[10];
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
		fscanf(fp, "%d", *ptr);
		sum = sum +  *ptr;
	}

	printf("Sum = %d", sum);

	free(ptr);
	fclose(fp);
	
	return 0;

}
