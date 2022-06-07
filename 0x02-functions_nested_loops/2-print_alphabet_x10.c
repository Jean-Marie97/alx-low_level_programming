#include <stdio.h>
#include "main.h"
/**
* print_alphabet - prints the english alphabet from a-z 10 times.
* Return: Always 0.
*/

void print_alphabet_x10(void)
{
char s, l;
for (s = 0; s < 10; s++)
{
for (l = 'a'; l <= 'z'; l++)
{
_putchar(l);
}
_putchar('\n');
}

}
