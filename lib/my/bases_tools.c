/*
** EPITECH PROJECT, 2019
** bases_tools.c
** File description:
** my_printf : functions used to work with bases
*/

#include "../../include/my.h"

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