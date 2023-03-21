#include "main.h"
/**
 *print_last_digit - print_last_digit
 *@n: the number
 * Return: last_digit
 */
int print_last_digit(int n)
{
int x = n % 10;
if (x < 0)
{
x = x * -1;
}
_putchar(x + 48);
return (x);
}
