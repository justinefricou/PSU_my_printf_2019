/*
** EPITECH PROJECT, 2019
** tools.c
** File description:
** my_printf : functions to display or calculate things
*/

#include "../../include/my.h"

int my_strlen(const char *str)
{
    int length = 0;

    for ( ; str[length] != 0; length++);
    return (length);
}

void my_put_char(int *printed_chars, char c)
{
    write(1, &c, 1);
    (*printed_chars)++;
}

void my_put_absolute_value(int *printed_chars, int nbr)
{
    if (nbr < 0)
        nbr = nbr * -1;
    if (nbr >= 10)
        my_put_absolute_value(printed_chars, nbr / 10);
    my_put_char(printed_chars, nbr % 10 + 48);
}

int is_specifier(char c)
{
    char *handled_specifiers = "csidunboxXpS";

    for ( ; *handled_specifiers != 0; handled_specifiers++) {
        if (*handled_specifiers == c)
            return (1);
    }
    return (0);
}

int is_flag(char c)
{
    char *handled_flags = "+ 0";

    for ( ; *handled_flags != 0; handled_flags++) {
        if (*handled_flags == c)
            return (1);
    }
    return (0);
}