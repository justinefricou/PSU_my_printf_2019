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
#include "specifier.h"

int my_printf(const char *format, ...);
specifier *get_specifiers(const char *format);
int detect_specifier(const char **format);
char *get_flags(const char **format);

int display_result(const char *str, specifier *spec, va_list list, int *nbr_c);
int display_arg(specifier *specifiers, va_list list, int *printed_chars);

int my_strlen(const char *str);
int my_put_char(int *printed_chars, char c);
int my_put_absolute_value(int *printed_chars, int nbr);

int pf_char(int *printed_chars, va_list list);
int pf_str(int *printed_chars, va_list list);
int pf_int(int *printed_chars, va_list list);
int pf_u(int *printed_chars, va_list list);
int pf_n(int *printed_chars, va_list list);

#endif