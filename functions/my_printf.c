/*
** EPITECH PROJECT, 2022
** mini_printf
** File description:
** miniprintf
*/
#include"myprintflib.h"

void conditionscdib(va_list ap, const char *format, int i)
{
    if (format[i] == '%' && format[i + 1] == 's') {
        my_putstr(va_arg(ap, char*));
        i++;
    } if (format[i] == '%' && format[i + 1] == 'c') {
        my_putchar(va_arg(ap, int));
        i++;
    } if (format[i] == '%' && format[i + 1] == 'd') {
        my_putnbr(va_arg(ap, int));
        i++;
    } if (format[i] == '%' && format[i + 1] == 'i') {
        my_putnbr(va_arg(ap, int));
    }
}

void condition_ouxpx(va_list ap, const char *format, int i)
{
    if (format[i] == '%' && format[i + 1] == '%') {
        my_putchar(format[i]);
        i++;
    }
}

int my_printf(const char *format, ...)
{
    va_list ap;
    int i = 0;
    va_start(ap, format);
    for (; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            conditionscdib(ap, format, i);
            condition_ouxpx(ap, format, i);
            i++;
        } else {
            my_putchar(format[i]);
        }
    }
    va_end (ap);
    return 0;
}
