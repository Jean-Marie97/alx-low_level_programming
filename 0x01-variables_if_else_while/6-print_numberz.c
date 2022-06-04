#include <stdio.h>



/**
 * main - Entry point
 * Description - Loop Put char
 * Return: 0
 */

int main(void)

{
int num = 48;
while (num < 58)
{
putchar(num);
num = num + 1;
}
putchar('\n');
return (0);
}
