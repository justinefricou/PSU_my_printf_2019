/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** Displaying the characters of a string (address in parameters)
*/

#include "../../include/my.h"

int my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}
