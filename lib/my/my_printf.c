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
    int nb_spe = 0;

    format_length = my_strlen(format);
    specifiers = malloc(sizeof(specifier) * (format_length) / 2 + 1);
    for ( ; *(format + 1) != 0; format++) {
        if (detect_specifier(&format)) {
            get_flags(specifiers[nb_spe], &format);
            (specifiers[nb_spe]).type = *format;
            nb_spe++;
        }
    }
    (specifiers[nb_spe]).type = 0;
    (specifiers[nb_spe]).flags = NULL;
    return (specifiers);
}

int detect_specifier(const char **format)
{
    int nbr_of_percents = 0;
    char *handled_specifiers = "csidunboxXpS";

    for ( ; **format != 0 && **format == '%'; (*format)++, nbr_of_percents++);
    for ( ; *handled_specifiers != 0; handled_specifiers++) {
        if (**format == *handled_specifiers)
            return (nbr_of_percents % 2);
    }
    return (0);
}

void get_flags(specifier specif, const char **format)
{
    int nb_flags = 0;

    specif.flags = malloc(sizeof(char) * 4);
    for ( ; **format != 0 && !is_specifier(**format); nb_flags++, (*format)++) {
        if (is_flag(**format))
            (specif.flags)[nb_flags] = **format;
    }
    (specif.flags)[nb_flags] = 0;
}