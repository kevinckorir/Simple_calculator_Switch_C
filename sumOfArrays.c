#include <stdio.h>

/**
 * main - get the sum of an array
 * Return: 0 success
 */
int main(void)
{
	int a[5], b[5], c[5];
	int i;

	/*Take inputs for first array */
	printf("Enter value of first array:\n");
	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);
	/*take inputs for second array */
	printf("\nEnter values of second array:\n");
	for (i = 0; i < 5; i++)
		scanf("%d", &b[i]);
	/* calculate and put in third array */
	for (i = 0; i < 5; i++)
	{
		c[i] = a[i] + b[i];
		printf("The sum of numbers in the %d index is: %d\n", i, c[i]);
	}
	return (0);
}

