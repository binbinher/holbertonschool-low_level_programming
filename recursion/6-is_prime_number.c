#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n);

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (is_prime_number(number))
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);
    
    return 0;
}
