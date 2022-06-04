#include <stdio.h>



/**
* main - Entry point
* Description - Using While loop
* Return: 0
*/

int main(void)

{

char x;
while (x != 'q' && x != 'e')
{
putchar(x);
x = x + 1;
}
putchar('\n');
return (0);
}
