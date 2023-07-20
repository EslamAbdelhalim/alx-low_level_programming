#include "main.h"
#include <stdio.h>
/**
 * int _isupper(int c) - function that checks for uppercase character.
 * @c: the int for the parameter of the function
 * 
 * Returns 0 otherwise
 *
*/

int _isupper(int c)
{
  if (c >= 65 && c <= 90)
    {
      return (1);
    }
  else
    return (0);
}
