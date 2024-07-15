#include <stdarg.h>
#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
typedef struct types {
    char z;
    void (*f)(va_list args);
} types_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_float(va_list args);
void print_string(va_list args);
void print_char(va_list args);
void print_int(va_list args);
#endif /* VARIADIC_FUNCTION_H */
