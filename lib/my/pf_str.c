/*
** EPITECH PROJECT, 2019
** pf_str.c
** File description:
** my_printf : pf_str
*/

#include "../../include/my.h"

void pf_str(int *printed_chars, va_list list, char *flags)
{
    char *str = NULL;

    str = va_arg(list, char *);
    for (int i = 0; str[i] != 0; i++){
        write(1, &(str[i]), 1);
        (*printed_chars)++;
    }
}
