#include <stdio.h>

/**
* print_alphabet - prints the english alphabet from a-z 10 times.
* Return: Always 0.
*/

int main()
{
   char s,l;
for (s = 0; s < 10; s++)
   {
     for (l = 'a'; l <= 'z'; l++)
   {
   putchar(l);
   }
 putchar('\n');
  }
  return 0;
}
