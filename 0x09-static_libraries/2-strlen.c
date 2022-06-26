#include "main.h"

/**
*_strlen - return length of a string
*@s: para
*Return: para
*/
int _strlen(char *s)
{
int c = 0;
while (*s != '\0')
{
c++;
s++;
}
return (c);
}
