#include <stdio.h>
#include <unistd.h>

/**
 * main - A C programe that prints a line to the standard error
 *
 * Description: print a quote using write function
 * write (int fd.const void *buf,size_t count)
 *
 * Return 1 (success)
*/

int main(void)
{
char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, quo, 59);
return (0);
}
