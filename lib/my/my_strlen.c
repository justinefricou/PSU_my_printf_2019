/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** Returning the number of characters in the string passed as parameter.
*/

#include "../../include/my.h"

int my_strlen(const char *str)
{
    int length = 0;

    for ( ; str[length] != 0; length++);
    return (length);
}