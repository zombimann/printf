#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: pointer to acharacter string, composed of zero or
 * more directives.
 *
 * Description: The conversion specifiers to be handles are c, s and %.
 * Return: The number of characters printed, exclusind the null byte
 */

int _printf(const char *format, ...)
{
	va_list ap;
	const char *fp;
	char *sp;
	int cp, ip, charcount;

	charcount = 0;
	va_start(ap, format);
	for (fp = format; *fp; fp++)
	{
		if (*fp != '%')
		{
			_putchar(*fp);
			continue;
		}
		switch (*++fp)
		{
		case 'c':
			cp = va_arg(ap, int);
			_putchar(cp);
			break;
		case 's':
			for (sp = va_arg(ap, char *); *sp; sp++)
				_putchar(*sp);
			break;
		case 'i':
			ip = va_arg(ap, int);
			print_int(ip);
			break;
		default:
			_putchar(*fp);
			break;
		}
		charcount++;
	}
	return charcount;
}


/**
 * print_int - print out an integer value
 * @val: the integer value to be printed
 *
 * Return: nothing
 */

void print_int(int val)
{
	if (val != 0)
	{
		print_int(val / 10);
		_putchar((val % 10) + '0');
	}
}
