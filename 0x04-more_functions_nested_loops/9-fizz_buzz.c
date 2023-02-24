#include <stdio.h>

/**
 * main - print from 1 to 100 if number is multply of 3 print fizz 
 * if multiply 5 print  buzz if multiply both print fizzbuzz
 *
 * Return: zero
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		if (i == 100)
		{
			break;
		}
		else
			printf(" ");
	}
	printf("\n");
	return (0);
}
