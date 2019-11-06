/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** my_put_nbr
*/

#include "../../include/my.h"

void my_putchar(char c);
void put_sign(int *nbr);

int my_put_nbr(int nbr)
{
    int nbr_found = 0;
    int current_digit = 0;

    if (nbr == 0) {
        my_putchar('0');
        return (0);
    }
    put_sign(&nbr);
    for (int divider = 1000000000; divider != 0; divider /= 10) {
        current_digit = (nbr / divider);
        if (current_digit > 9)
            current_digit %= 10;
        if (current_digit != 0 || nbr_found) {
            my_putchar(current_digit + 48);
            nbr_found = 1;
        }
    }
    return (0);
}

void put_sign(int *nbr)
{
    if (*nbr < 0) {
        my_putchar('-');
        (*nbr) = (*nbr) * -1;
    }
}