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
while (n <= 122)
{
if (n == 133 || n == 101)
{
n++;
continue;
}
putchar(n);
n++;
}
putchar(10);
return (0);
}
