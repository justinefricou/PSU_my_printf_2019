/*
** EPITECH PROJECT, 2019
** my_printf.c
** File description:
** my_printf function
*/

#include "../../include/my.h"

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
        if (detect_specifier(&format)) {
            (specifiers[nbr_of_specifiers]).type = *format;
            (specifiers[nbr_of_specifiers]).flags = get_flags(&format);
            nbr_of_specifiers++;
        }
    }
    (specifiers[nbr_of_specifiers]).type = '\0';
    (specifiers[nbr_of_specifiers]).flags = NULL;
    return (specifiers);
}

int detect_specifier(const char **format)
{
    int nbr_of_percents = 0;
    char *handled_specifiers = "csidunboxXpS";

    for ( ; **format != 0 && **format == '%'; (*format)++, nbr_of_percents++);
    for ( ; *handled_specifiers != 0; handled_specifiers++)
        if (**format == *handled_specifiers)
            return (nbr_of_percents % 2);
    return (0);
}

char *get_flags(const char **format)
{
    char *flags = NULL;

    return (flags);
}