#include "main.h"
/**
 * print_alphabet_x10 - function to print abc 10 times
 *
 *Return: 0
 *
*/
void rint_alphabet_x10(void)
{
char i, z;
for (i = 0;i <= 9; i++)
{
for (z = 'a'; z <= 'z'; z++)
{
_putchar(z);
}
}
_putchar('\n');

}
