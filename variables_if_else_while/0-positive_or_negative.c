#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
<<<<<<< HEAD
 */

=======
*/
>>>>>>> 8cca3b952e781a52f2ceef1b970d510c297eb886
int main(void)

 {
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
<<<<<<< HEAD
	
	if(n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if(n < 0);
	{
	printf("%d is negative\n",n);
	}	
	else	
	{	
	printf("%d is zero\n", n);
	}
=======

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
>>>>>>> 8cca3b952e781a52f2ceef1b970d510c297eb886

	return (0);
}
