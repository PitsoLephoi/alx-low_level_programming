#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (showing an error occurred)
 */
int main(void)
{
char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, "Error: ", 7);
write(2, msg, sizeof(msg) - 1);
return (1);
}
