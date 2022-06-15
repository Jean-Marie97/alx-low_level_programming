#include <stdio.h>

#include <stdlib.h>

#include <time.h>



/**
 * main - random password generator for 101-crackme
 * Return: always 0
 */

int main(void)

{
srand((unsigned int)(time(NULL)));
int index = 0;
char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
for (index = 0; index < 12; index++)
{
printf("%c", characters[rand() % (sizeof(characters) - 1)]);
}
}
