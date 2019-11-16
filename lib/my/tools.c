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

long long x_to_the_power_of_n(int x, int n)
{
    long long result = 1;
    for ( ; n > 0; n--)
        result *= x;
    return (result);
}

int get_digit_in_base(long long nbr, int base, int exponent)
{
    int digit = base - 1;

    for ( ; digit > 0; digit--) {
        if (nbr >= digit * x_to_the_power_of_n(base, exponent))
            break;
    }
    return (digit);
}