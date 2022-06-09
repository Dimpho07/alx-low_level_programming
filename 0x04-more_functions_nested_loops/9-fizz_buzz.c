#include <stdio.h>
/**
*main - prints multiples
*Prints Fizz for multiples of three
*Prints Buzz for the multiples of five
*Prints FizzBuzz for numbers which are multiples of both three and five
*Returns 0
*/

int main(void)
{
	int i
	printf("Enter the number :");
	scanf("%d");
	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz\t");
		else if ((i % 3 == 0)
			printf("Fizz\t");
		else if ((i % 5) == 0)
			printf("Buzz\t");
		else
			printf("%d\t", i);
	}
	return (0);
}
