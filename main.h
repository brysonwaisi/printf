#ifndef MAIN_H
#define MAIN_H

/**
 * struct - structure for printing various types
 * @t: type to print
 * @f: function to print 
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);

}print_t;

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c):
int print_s(va_list s);
#endif /* MAIN_H */
