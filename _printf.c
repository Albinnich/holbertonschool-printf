#include "main.h"
/**
 * _printf - function that produces output acc to format
 * @format: character string
 * Return: number of characters written
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				char c;

				c = va_arg(args, int);
				write(1, &c, 1);
				count++;
			}
			else if (*format == 's')
			{
				char *str;

				str = va_arg(args, char *);

				while (*str != '\0')
				{
					write(1, str, 1);
					str++;
					count++;
				}
			}
			else if (*format == '%')
			{
				write(1, "%", 1);
				count++;
			}
		}
		else
		{
			write(1, format, 1);
				count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
