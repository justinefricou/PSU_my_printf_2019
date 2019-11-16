/*
** EPITECH PROJECT, 2019
** pf_m.c
** File description:
** my_printf : pf_m
*/

#include "../../include/my.h"

void pf_m(int *printed_chars, va_list list)
{
    char buffer[2] = {0};
    int size_read = 1;

    for ( ; size_read > 0; ) {
        size_read = read(2, buffer, 1);
        if (size_read > 0)
            write(1, buffer, 1);
    }
}