#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 48;
while (n < 58)
{
putchar(n);
if (n == 57)
{
putchar(36);
}
else
{
putchar(44);
}
n++;
}
putchar(10);
return (0);
}
