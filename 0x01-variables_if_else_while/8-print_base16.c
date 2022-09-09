#include <stdio.h>
/**
 * main - hexa lets rmove the spaces for chcker to find happiness
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
	i = 'a';
	while (i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);

}
