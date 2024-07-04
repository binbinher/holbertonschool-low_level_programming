#include "main.h"
/**
 * is_prime_number -returns 1 if the input integer is a prime number
 * otherwise return 0.
 * @n:the input integer
 * Return:1 if the input integer is a prime.
 */
int is_prime_number(int n)
{
	int stt = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, stt));
}

/**
 * is_prime -return 1 if n is prime.
 * @n: number to be checked
 * @stt:the start number
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime(int n, int stt)
{
	if (stt <= 1)
		return (1);
	else if (n % stt == 0)
		return (0);
	return (is_prime(n, stt - 1));
}
