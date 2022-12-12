#include <stdio.h>
/**
* main - main function
*
* Description: using the main function
* this program print sigle digit number
* Return: 0
*/
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}
	putchar('\n');
	return (0);
}
