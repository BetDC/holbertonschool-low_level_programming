#include <stdio.h>
/**
* main - Entry point of the program
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 'z'; i >= 'a'; i--)
{
putchar(i); /* Print lowercase letters in reverse */
}
putchar('\n'); /* Print newline character */
return (0);
}
