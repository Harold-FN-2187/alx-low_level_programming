#include <stdio.h>
/**
 * main  - prints name of file it was compiled from
 * Return:  Returns 0
 */
int main(void)
{
printf("%s\n", __BASE_FILE__);
return (0);
}
