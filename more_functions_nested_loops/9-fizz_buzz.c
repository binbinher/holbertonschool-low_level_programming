#include <stdio.h>
/** 
 * main - entry point
 * prints the numbers from 1 to 100, followed by a new line. 
 * multiples of three print Fizz,the multiples of five print Buzz. 
 * multiples of both three and five print FizzBuzz.
 * Return: Always 0.
 */
int main(void)
{
	int num;
	
	for(num = 1; num <= 100; num++)
		{
			if ((num % 3) ==0 && (num % 5) == 0)
			{
				printf("FizzBuzz");
			}
			else if ((num % 3) == 0)
			{	
				printf("Fizz");
			}
			else if ((num % 5) ==0)
			{
				printf("Buzz");
			}
			else 
			{
				printf("%d",num);
			}
			if (num == 100)
				continue;
			printf(" ");
		}
	return(0);
}
