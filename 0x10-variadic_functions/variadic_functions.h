#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>


/**
 * struct forms - struct forms
 *
 * @token: format token
 *
 * @f: the function associated
*/
typedef struct forms
{
	char *token;
	void (*f)(char *, va_list);
} forms_t;

void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int sum_them_all(const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
