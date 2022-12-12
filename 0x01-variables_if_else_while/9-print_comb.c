#include <stdio.h>
/**
* main - main block
*
* Description: using main function
* this program print entry point
* Return: Always 0 (Success/correct)
*/
int main(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);
		if (number == 57)
		{
			break;
		}
		putchar(',');
		putchar (' ');
	}
	putchar('\n');
	return (0);
}
