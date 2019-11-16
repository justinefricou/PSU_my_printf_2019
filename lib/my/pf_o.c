/*
** EPITECH PROJECT, 2019
** pf_o.c
** File description:
** my_printf : pf_o
*/

#include "../../include/my.h"

void pf_o(int *printed_chars, va_list list)
{
    unsigned int nbr = 0;
    int digit = 0;
    int significant_digit = 0;

    nbr = va_arg(list, unsigned int);
    for (int exponent = 11; exponent >= 0; exponent--) {
        digit = get_digit_in_base(nbr, 8, exponent);
        nbr -= digit * x_to_the_power_of_n(8, exponent);
        if (digit != 0 || significant_digit)
            my_put_char(printed_chars, digit + 48);
        if (digit > 0)
            significant_digit = 1;
    }
}