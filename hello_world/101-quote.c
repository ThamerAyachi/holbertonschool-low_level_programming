#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Just print string'
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
char myChar;
char text[] = "and that piece of art is useful\" - Dora Korpar, 2015 - 10 - 1";

for (int i = 0; i <= (sizeof(text) / sizeof(myChar)) - 2 ; i++)
{
putchar(text[i]);
}

putchar('9');
putchar('\n');

return (1);
}

