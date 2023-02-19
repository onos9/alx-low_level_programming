#include <unistd.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
       	const char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	const int len = strlen(msg);
	write(2, msg, len);
	return (1);
}
