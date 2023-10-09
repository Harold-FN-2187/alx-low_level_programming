#include <unistd.h>
/*
 * main - main Entry point
 *
 * return ; always return 1 indicating success
 */
int main(void)
{
	char stri[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, stri, 59);
	return(1);
}
