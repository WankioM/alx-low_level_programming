#include <stdio.h>
/**
 * main - prints numbers 0-9 
 * and putchar 2x max
(*
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
