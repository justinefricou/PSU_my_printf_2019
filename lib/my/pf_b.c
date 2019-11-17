/*
** EPITECH PROJECT, 2019
** pf_b.c
** File description:
** my_printf : pf_b
*/

#include "../../include/my.h"

void pf_b(int *printed_chars, va_list list, char *flags)
{
    unsigned long nbr = 0;
    int digit = 0;
    int significant_digit = 0;

    nbr = va_arg(list, unsigned int);
    for (int exponent = 27; exponent >= 0; exponent--) {
        digit = get_digit_in_base(nbr, 2, exponent);
        nbr -= digit * x_to_the_power_of_n(2, exponent);
        if (digit != 0 || significant_digit)
            my_put_char(printed_chars, digit + 48);
        if (digit > 0)
            significant_digit = 1;
    }
    if (significant_digit == 0)
        my_put_char(printed_chars, '0');
}