#include<unistd.h>

/**
* main - this function prints the sentence
*
* Description: using the main function
* this program prints "and that piece of art is useful
* Return: returns 1
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
