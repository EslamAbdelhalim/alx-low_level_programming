#include "main.h"
#include <stdio.h>
/**
 * int _isdigit(int c) - unction that checks for a digit (0 through 9).
 *
 * @c: the int number that will check
 * Returns 1 if c is a digit
 * Returns 0 otherwise
*/

int _isdigit(int c)
{
  if (c > '0' && c < 9)
    return(1);
  else
    return(0);
}
