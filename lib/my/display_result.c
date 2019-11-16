/*
** EPITECH PROJECT, 2019
** display_result.c
** File description:
** Functions used to display the result.
*/

#include "../../include/my.h"

int display_result(const char *str, specifier *spec, va_list list, int *nbr_c)
{
    for (int i = 0; str[i] != 0; i++) {
        if (str[i] == '%' && str[i + 1] == (*spec).type) {
            if (display_arg(spec, list, nbr_c) == 84)
                return (84);
            spec++;
            i++;
        } else if (str[i] == '%' && str[i + 1] == '%') {
            write(1, &(str[i]), 1);
            i++;
            (*nbr_c)++;
        } else {
            write(1, &(str[i]), 1);
            (*nbr_c)++;
        }
    }
    return (0);
}

int display_arg(specifier *specifiers, va_list list, int *printed_chars)
{
    int (*fun_ptr_arr[7])(int *, va_list) = {pf_char, pf_str, pf_int, \
        pf_int, pf_u, pf_n, pf_b};
    char *handled_specifiers = "csidunb";
    int i = 0;

    for ( ; handled_specifiers[i] != (*specifiers).type; i++);
    if (fun_ptr_arr[i](printed_chars, list) == 84)
        return (84);
    return (0);
}