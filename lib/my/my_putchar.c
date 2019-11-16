/*
** EPITECH PROJECT, 2019
** my_putchar
** File description:
** my_putchar
*/

#include "../../include/my.h"

int my_putchar(int *printed_chars, va_list list)
{
    char character;

    character = va_arg(list, int);
    write(1, &character, 1);
    (*printed_chars)++;
    return (0);
}
