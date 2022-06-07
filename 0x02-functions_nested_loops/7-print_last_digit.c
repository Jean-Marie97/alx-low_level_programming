#include "main.h"
#include <stdio.h>

/**
 *
 * print_last_digit(int)  prints the last digit of a number.
 * Return: The last digit
 */

int print_last_digit(int n)

{
int nv;
if (n < 0)
{
nv = -1 * (n % 10);
_putchar(nv + '0');
return (nv);
}
else
{
nv = n % 10;
_putchar(nv + '0');
return (nv);
}
}
