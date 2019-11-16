/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** Displaying the characters of a string (address in parameters)
*/

#include "../../include/my.h"

int my_putstr(int *printed_chars, va_list list)
{
    char *str = NULL;

    str = va_arg(list, char *);
    for (int i = 0; str[i] != 0; i++){
        write(1, &(str[i]), 1);
        (*printed_chars++);
    }
    return (0);
}
