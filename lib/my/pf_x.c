/*
** EPITECH PROJECT, 2019
** pf_x.c
** File description:
** my_printf : pf_x
*/

#include "../../include/my.h"

#include "../../include/my.h"

void pf_x(int *printed_chars, va_list list)
{
    unsigned int nbr = 0;
    int digit = 0;
    int significant_digit = 0;

    nbr = va_arg(list, unsigned int);
    display_number_base_8(printed_chars, nbr);
}

void display_number_base_16(int *printed_chars, unsigned int nbr)
{
    int digit = 0;
    int significant_digit = 0;

    for (int exponent = 11; exponent >= 0; exponent--) {
        digit = get_digit_in_base(nbr, 8, exponent);
        nbr -= digit * x_to_the_power_of_n(8, exponent);
        if (digit != 0 || significant_digit)
            my_put_char(printed_chars, digit + 48);
        if (digit > 0)
            significant_digit = 1;
    }
}