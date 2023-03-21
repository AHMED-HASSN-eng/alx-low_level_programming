#include "main.h"
/**
 * print_alphabet_x10 - print_alphabet_x10
 *
 * Return: always 0 (sucess)
 */
void print_alphabet_x10(void)
{
int i;
int n = 10;
while (n--)
{
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
