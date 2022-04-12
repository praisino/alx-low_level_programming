#include <main.h>
#include <unistd.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
