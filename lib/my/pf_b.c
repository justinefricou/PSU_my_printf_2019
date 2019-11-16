/*
** EPITECH PROJECT, 2019
** pf_b.c
** File description:
** my_printf : pf_b
*/

#include "../../include/my.h"

void pf_b(int *printed_chars, va_list list)
{
    long long nbr;
    int digit = 0;
    int one_found = 0;

    nbr = va_arg(list, long long);
    for (int exponent = 63; exponent >= 0; exponent--) {
        digit = ((nbr - x_to_the_power_of_n(2, exponent)) >= 0);
        if (digit != 0 || one_found) {
            my_put_char(printed_chars, digit + 48);
            nbr -= x_to_the_power_of_n(2, exponent);
        }
        if (digit == 1)
            one_found = 1;
    }
}

long long x_to_the_power_of_n(int x, int n)
{
    long long result = 1;
    for ( ; n > 0; n--)
        result *= x;
    return (result);
}