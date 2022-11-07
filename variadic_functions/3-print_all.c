#include "variadic_functions.h"
/**
 *print_char -prints all formats.
 *@liste:input var.
 * Return:void.
 */
void print_char(va_list liste)
{
	printf("%c", va_arg(liste, int));
}
/**
 *print_int -prints all formats.
 *@liste:var.
 * Return:void.
 */
void print_int(va_list liste)
{
	printf("%d", va_arg(liste, int));
}
/**
 *print_float -prints all formats.
 *@liste:var.
 * Return:void.
 */
void print_float(va_list liste)
{
	printf("%f", va_arg(liste, double));
}
/**
 *print_string -prints all formats.
 *@liste:var.
 * Return:void.
 */
void print_string(va_list liste)
{
	printf("%s", va_arg(liste, char *));
}
/**
 *print_all -prints all formats.
 *@format:input var.
 * Return:void.
 */
void print_all(const char *format, ...)
{
	int i = 0;
	char *sp1 = "", *sp2 = ", ";
	int j = 0;

	va_list args;
	mytypes_t types[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}};
	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		while (types[j].s != '\0')
		{
			if (types[j].s == format[i])
			{
				printf("%s ", sp1);
				types[j].f(args);
				sp1 = sp2;
			}
			j++;
		}
		i++;
		j = 0;
	}
	printf("\n");
	va_end(args);
}
