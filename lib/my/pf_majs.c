/*
** EPITECH PROJECT, 2019
** pf_majs.c
** File description:
** my_printf : pf_majs
*/

#include "../../include/my.h"

void pf_majs(int *printed_chars, va_list list)
{
    char *str = NULL;

    str = va_arg(list, char *);
    for (int i = 0; str[i] != 0; i++){
        if (32 <= str[i] && str[i] < 127)
            my_put_char(printed_chars, str[i]);
        else {
            my_put_char(printed_chars, '\\');
            display_nbr_octal_base(printed_chars, str[i]);
        }
    }
    my_put_char(printed_chars, '\\');
    my_put_char(printed_chars, '0');
}

void display_nbr_octal_base(int *printed_chars, char nbr)
{
    int digit = 0;
    int significant_digit = 0;

    for (int exponent = 6; exponent >= 0; exponent--) {
        digit = get_digit_in_base(nbr, 8, exponent);
        nbr -= digit * x_to_the_power_of_n(8, exponent);
        if (digit != 0 || significant_digit)
            my_put_char(printed_chars, digit + 48);
        if (digit > 0)
            significant_digit = 1;
    }
}