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
int n = 97;
int m = 65;
while (n <= 122)
{
putchar(n);
n++;
}
while (m <= 90)
{
putchar(m);
m++;
}
putchar(10);
return (0);
}
