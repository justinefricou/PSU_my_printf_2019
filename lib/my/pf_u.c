/*
** EPITECH PROJECT, 2019
** pf_unsigned_int.c
** File description:
** my_printf : pf_unsigned_int
*/

#include "../../include/my.h"

int pf_u(int *printed_chars, va_list list)
{
    int nbr = 0;

    nbr = va_arg(list, unsigned int);
    if (nbr < 0)
        return (84);
    my_put_absolute_value(printed_chars, nbr);
    return (0);
}