#include "main.h"
/**
 * int _isalpha(int c) - unction that checks for alphabetic character. 
 *
 * Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 * @c: is the int that will use for the argument of the function
 *
*/
int _isalpha(int c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
				 {
				   return (1);
				 }
  else
    {
      return (0);
    }

}
