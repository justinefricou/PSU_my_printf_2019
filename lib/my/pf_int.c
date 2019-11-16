/*
** EPITECH PROJECT, 2019
** pf_int.c
** File description:
** my_printf : pf_int
*/

#include "../../include/my.h"

int pf_int(int *printed_chars, va_list list)
{
    int nbr = 0;

    nbr = va_arg(list, int);
    if (nbr < 0)
        my_put_char(printed_chars, '-');
    my_put_absolute_value(printed_chars, nbr);
    return (0);
}