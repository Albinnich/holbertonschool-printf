#include "main.h"
/**
 * _printf - customized function for 'c', 's' and '%'
 * @format: character string
 * Return: number of characters printed (except null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	char conversionSpecifier;
	const char *nullStr = "(null)";

	va_start(args, format);
	while (*format)
	{
	if (*format == '%')
	{ format++;
		conversionSpecifier = *format;
		switch (conversionSpecifier)
		{
			case 'c': {
			char c = va_arg(args, int);

			putchar(c);
			count++;
			break; }
			case 's': {
			char *str = va_arg(args, char *);

			if (str == NULL)
			{
				while (*nullStr)
				{
					putchar(*nullStr);
					nullStr++;
					count++; }
			}
			else
			{
			while (*str)
			{ putchar(*str);
				str++;
				count++; }
			}
			break; }
			case '%': {
			putchar('%');
			count++;
			break; }
		default:
		break;
	}
	}
	else
	{ putchar(*format);
		count++; }
	format++; }
	va_end(args);
	return (count);
}
