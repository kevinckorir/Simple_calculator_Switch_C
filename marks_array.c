#include <stdio.h>

/** 
 * main - calculate sum and average of marks
 * Return: 0 success
 */
int main(void)
{
	int i;
	float marks[5];
	float sum, avg;

	/*Take input from user*/
	printf("Enter marks of 5 students:\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%f", &marks[i]); 
	}
	/* Calculate the sum */
	for (i = 0; i < 5; i++)
	{
		sum = sum + marks[i];
	}
	avg = sum / 5;
	printf("Sum is : %f\n", sum);
	printf("Average is :%f\n", avg);
	return (0);
}
	
