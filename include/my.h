/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** Header file with the prototypes of all the functions exposed by libmy.a
*/

#ifndef DEF_MY
#define DEF_MY

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int my_printf(const char *format, ...);
int my_strlen(const char *str);
void my_putchar(char c);
int my_putstr(char *str);
int my_put_nbr(int nbr);

#endif