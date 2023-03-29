#include <stdio.h>

/**
 * main - count number of even and odd numbers
 * Return: 0 success
 */
int main(void)
{
	int i;
	int a[10];
	int even = 0, odd = 0;

	/* Take the input from user */
	printf("Enter 10 numbers: \n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] % 2 == 0)
		{
			even++;
		}
		else
			odd++;
	}
	printf("Number of even numbers is :%d\n", even);
	printf("Number of odd numbers is : %d\n", odd);
	return (0);
}
