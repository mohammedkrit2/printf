#include "main.h"
/**
 * nbr_digits - to calculate the number
 * of digits in an integer
 * @n: input numbers
 * Return: the  length
 */
int nbr_digits(int n)
{
	if (n == 0)
		return (0);
	return (1 + nbr_digits(n / 10));
}

/**
 * print_nbr - to print the number
 * @nbr: an integer number
 * Return: Nothing
 */
void print_nbr(int nbr)
{
	int i = 0;

	if (nbr < 0)
		i++;
	i += nbr_digits(nbr);

	if (nbr < 0)
	{
		_putchar('-');
		nbr = -nbr;
	}
	else if (nbr >= 10)
	{
		print_nbr(nbr / 10);
		print_nbr(nbr % 10);
	}
	else if (nbr < 10)
	{
		_putchar(nbr + '0');
	}
}
