/*
** EPITECH PROJECT, 2019
** pf_char.c
** File description:
** my_printf : pf_char
*/

#include "../../include/my.h"

void pf_char(int *printed_chars, va_list list)
{
    char character;

    character = va_arg(list, int);
    write(1, &character, 1);
    (*printed_chars)++;
}