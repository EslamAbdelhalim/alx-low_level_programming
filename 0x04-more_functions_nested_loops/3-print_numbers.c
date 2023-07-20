#include "main.h"

/**
 *
 * print_number - function that prints the numbers, from 0 to 9,
 * followed by a new line.
 *
 */
void print_numbers(void)
{
  int c;
  for (c = 0; c <= 9; c++)
    _putchar((c % 10) + '0');
  
  _putchar('\n');
}
