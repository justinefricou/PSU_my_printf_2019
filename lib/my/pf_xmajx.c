/*
** EPITECH PROJECT, 2019
** pf_xmajx.c
** File description:
** my_printf : pf_x and pf_majx
*/

#include "../../include/my.h"

void pf_x(int *printed_chars, va_list list)
{
    unsigned int nbr = 0;
    int digit = 0;
    int significant_digit = 0;
    char *base = "0123456789abcdef";

    nbr = va_arg(list, unsigned int);
    for (int exponent = 9; exponent >= 0; exponent--) {
        digit = get_digit_in_base(nbr, 16, exponent);
        nbr -= digit * x_to_the_power_of_n(16, exponent);
        if (digit != 0 || significant_digit)
            my_put_char(printed_chars, base[digit]);
        if (digit > 0)
            significant_digit = 1;
    }
    if (significant_digit == 0)
        my_put_char(printed_chars, '0');
}

void pf_majx(int *printed_chars, va_list list)
{
    unsigned int nbr = 0;
    int digit = 0;
    int significant_digit = 0;
    char *base = "0123456789ABCDEF";

    nbr = va_arg(list, unsigned int);
    for (int exponent = 9; exponent >= 0; exponent--) {
        digit = get_digit_in_base(nbr, 16, exponent);
        nbr -= digit * x_to_the_power_of_n(16, exponent);
        if (digit != 0 || significant_digit)
            my_put_char(printed_chars, base[digit]);
        if (digit > 0)
            significant_digit = 1;
    }
    if (significant_digit == 0)
        my_put_char(printed_chars, '0');
}