/*
** EPITECH PROJECT, 2019
** my_printf.c
** File description:
** my_printf function
*/

#include "../../include/my.h"
#include "../../include/specifier.h"

specifier *get_specifiers(const char *format);
int find_specifier(const char **format);
char *get_flags(const char **format);

void display_result(const char *str, specifier *spec, va_list list, int *nbr_c);

int my_printf(const char *format, ...)
{
    specifier *specifiers = NULL;
    va_list list;
    int printed_chars = 0;

    va_start(list, format);
    specifiers = get_specifiers(format);
    display_result(format, specifiers, list, &printed_chars);
    va_end(list);
    free(specifiers);
    return (printed_chars);
}

specifier *get_specifiers(const char *format)
{
    specifier *specifiers = NULL;
    int format_length = 0;
    int nbr_of_specifiers = 0;

    format_length = my_strlen(format);
    specifiers = malloc(sizeof(specifier) * (format_length) / 2 + 1);
    for ( ; *(format + 1) != 0; format++) {
        if (find_specifier(&format)) {
            (specifiers[nbr_of_specifiers]).type = *format;
            (specifiers[nbr_of_specifiers]).flags = get_flags(&format);
            nbr_of_specifiers++;
        }
    }
    (specifiers[nbr_of_specifiers]).type = '\0';
    (specifiers[nbr_of_specifiers]).flags = NULL;
    return (specifiers);
}

int find_specifier(const char **format)
{
    int nbr_of_percents = 0;

    for ( ; **format != 0 && **format == '%'; (*format)++, nbr_of_percents++);
    return (nbr_of_percents % 2);
}

char *get_flags(const char **format)
{
    char *flags = NULL;

    //!
    return (flags);
}