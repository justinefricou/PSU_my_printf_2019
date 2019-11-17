/*
** EPITECH PROJECT, 2019
** pf_n.c
** File description:
** my_printf : pf_n
*/

#include "../../include/my.h"

void pf_n(int *printed_chars, va_list list, char *flags)
{
    int *nbr = NULL;

    nbr = va_arg(list, int *);
    *nbr = *printed_chars;
}