#include <stdlib.h>
#include <stdio.h>
#include <time>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
for (int i = 48 ; i < 57 ; i++)
{
for (int j = i + 1 ; j <= 57 ; j++)
{
putchar(i);
putchar(j);
if (i != 56)
putchar(44);
}
}
return (0);
}
