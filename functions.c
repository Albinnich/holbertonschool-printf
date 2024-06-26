
#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * print_char - Function that prints character
 * @args: The parameter which shows arguments of variadic function
 * Return: Returns number of the character printed
 */
int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	return (write(1, &c, 1));
}
/**
 * print_string - Function that prints string
 * @args: The parameter which shows arguments of variadic function
 * Return: Returns  count of printed characters
 */
int print_string(va_list args)
{
	int count = 0;
	int i = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[i] != '\0')
	{
		count += write(1, str++, 1);
	}
	return (count);
}
/**
 * print_percent - Function that prints percentage
 * @args: The parameter which shows arguments of variadic function
 * Return: Returns percent symbol
 */
int print_percent(va_list args)
{
	(void)args;
	return (write(1, "%", 1));
}
/**
 * print_decimal - Function that prints decimal
 * @args: The parameter which shows arguments of variadic function
 * Return: Returns count of decimal
 */
int print_decimal(va_list args)
{
	int digit_count = 1;
	unsigned int temp;
	int n = va_arg(args, int);
	unsigned int xyz_value;
	int count;

	if (n < 0)
	{
		xyz_value = (unsigned int)(-n);
		count = write(1, "-", 1);
	}
	else
	{
		xyz_value = (unsigned int)n;
		count = 0;
	}
	if (xyz_value == 0)
	{
		count += write(1, "0", 1);
		return (count);
	}
	for (temp = xyz_value; temp > 9; temp /= 10)
		digit_count *= 10;
	while (digit_count != 0)
	{
		char digit_char = ((xyz_value / digit_count) % 10) + '0';

		count += write(1, &digit_char, 1);
		digit_count /= 10;
	}
	return (count);
}
/**
 * print_integer - Function that prints integer
 * @args: The parameter which show arguments of variadic function
 * Return: Returns count of decimal
 */
int print_integer(va_list args)
{
	return (print_decimal(args));
}
