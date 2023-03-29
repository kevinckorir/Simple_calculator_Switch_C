#include <stdio.h>

/**
 * main - do simple calculations
 * Return: 0 Success
 */
int main(void)
{
	int a, b;
	int sum, sub, mul, div;
	char operator;

	/*take input from user*/
	printf("Enter two operands:");
	scanf("%d %d", &a, &b);
	printf("Enter operator:");
	scanf(" %c", &operator);

	/*Perform the operation*/
	switch (operator)
	{
	case '+':
		sum = a + b;
		printf("Answer = %d\n", sum);
		break;
	case '-':
		sub = a - b;
		printf("Answer = %d\n", sub);
		break;
	case '*':
		mul = a * b;
		printf("Answer = %d\n", mul);
		break;
	case '/':
		div = a / b;
		printf("Answer = %d\n", div);
		break;
	default:
		printf("Enter a valid operator");
	}
	return (0);
}
