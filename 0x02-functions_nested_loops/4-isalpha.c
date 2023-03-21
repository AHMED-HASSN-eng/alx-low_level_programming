#include "main.h"
/**
 * _isalpha - print_alphabet is true
 *@c: the character in ASCII code
 * Return: 1 is alphabet else 0
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}
