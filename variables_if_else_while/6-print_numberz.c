#include <stdio.h>

int main(void)
{
   /** main - prints all single digit numbers of base 10 starting from 0,
   *		only use putchar function,no printf
   */
  	int num;
	
	for(num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	
	putchar('\n');
   
   return 0;
}
