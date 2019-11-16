/*
** EPITECH PROJECT, 2019
** tools.c
** File description:
** my_printf : functions to display things
*/

#include "../../include/my.h"

int my_put_char(int *printed_chars, char c)
{
    write(1, &c, 1);
    (*printed_chars)++;
    return (0);
}

int my_put_nbr(int *printed_chars, int nbr)
{
    if (nbr < 0) {
        my_put_char(printed_chars, '-');
        nbr = nbr * -1;
    }
    if (nbr >= 10)
        my_put_nbr(printed_chars, nbr / 10);
    my_put_char(printed_chars, nbr % 10 + 48);
    return (0);
}