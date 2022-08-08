#include <stdio.h>

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
	int ip;

	va_start(ap, format);
	for (fp = format; *p; p++)
	{
		if (*fp != '%')
		{
			write(1, fp, 1);
			continue;
		}
		switch (*++p)
		{
		case 'c':
			ip = va_arg(ap, int);
			write(1, ip, 1);
			break;
		case 's':
			for (sp = va_arg(ap, char *); *sp; sp++)
				write(1, sp, 1);
			break;
		default:
			write(1, fp);
			break;
		}
}
