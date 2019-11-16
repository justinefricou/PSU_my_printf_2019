/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** my_put_nbr
*/

#include "../../include/my.h"

int my_putint(int *printed_chars, va_list list)
{
    int nbr = 0;

    nbr = va_arg(list, int);
    my_put_nbr(printed_chars, nbr);
    return (0);
}