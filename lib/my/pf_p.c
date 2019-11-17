/*
** EPITECH PROJECT, 2019
** pf_p.c
** File description:
** my_printf : pf_p
*/

#include "../../include/my.h"

void pf_p(int *printed_chars, va_list list, char *flags)
{
    long long pointer = 0;
    int digit = 0;
    int significant_digit = 0;
    char *base = "0123456789abcdef";

    my_put_char(printed_chars, '0');
    my_put_char(printed_chars, 'x');
    pointer = (long long)(va_arg(list, void *));
    for (int exponent = 14; exponent >= 0; exponent--) {
        digit = get_digit_in_base(pointer, 16, exponent);
        pointer -= digit * x_to_the_power_of_n(16, exponent);
        if (digit != 0 || significant_digit)
            my_put_char(printed_chars, base[digit]);
        if (digit > 0)
            significant_digit = 1;
    }
}