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
	char *str;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c': {
					char c = va_arg(args, int);

					count += write(1, &c, 1);
					break;
				}
				case 's': {
					str = va_arg(args, char *);
					while (*str != '\0')
					{
						count += write(1, str, 1);
						str++; }
					break;
				}
				case '%': {
				count += write(1, "%", 1);
				break;
			}
		}
		}
		else
		{
			count += write(1, format, 1);
		}
		format++;
	}
	va_end(args);
	return (count);
}
