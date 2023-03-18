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
n++;
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
