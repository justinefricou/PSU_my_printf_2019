/*
** EPITECH PROJECT, 2019
** display_result.c
** File description:
** Functions used to display the result.
*/

#include "../../include/my.h"
#include "../../include/specifier.h"

void display_arg(specifier *specifiers, va_list list, int *printed_chars);

void display_result(const char *str, specifier *spec, va_list list, int *nbr_c)
{
    for (int i = 0; str[i] != 0; i++) {
        if (str[i] == '%' && str[i + 1] != '%') {
            display_arg(spec, list, nbr_c);
            spec++;
            i++;
        } else {
            write(1, &(str[i]), 1);
            (*nbr_c)++;
        }
        /*if (str[i] == '%' && str[i + 1] == '%')
            i++;*/
    }
}

void display_arg(specifier *specifiers, va_list list, int *printed_chars)
{
    switch ((*specifiers).type) {
    case 'c':
        my_putchar(va_arg(list, int));
        break;
    case 's':
        my_putstr(va_arg(list, char *));
        break;
    case 'i':
        my_put_nbr(va_arg(list, int));
        break;
    }
}