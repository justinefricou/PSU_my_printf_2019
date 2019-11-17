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
void get_flags(specifier specif, const char **format);

void display_result(const char *str, specifier *spec, va_list list, int *nbr_c);
void display_arg(specifier *specifiers, va_list list, int *printed_chars);

int my_strlen(const char *str);
void my_put_char(int *printed_chars, char c);
void my_put_absolute_value(int *printed_chars, int nbr);
int is_specifier(char c);
int is_flag(char c);

long long x_to_the_power_of_n(int x, int n);
int get_digit_in_base(long long nbr, int base, int exponent);
void display_nbr_octal_base(int *printed_chars, char nbr);

void pf_char(int *printed_chars, va_list list);
void pf_str(int *printed_chars, va_list list);
void pf_int(int *printed_chars, va_list list);
void pf_u(int *printed_chars, va_list list);
void pf_n(int *printed_chars, va_list list);
void pf_b(int *printed_chars, va_list list);
void pf_o(int *printed_chars, va_list list);
void pf_x(int *printed_chars, va_list list);
void pf_majx(int *printed_chars, va_list list);
void pf_p(int *printed_chars, va_list list);
void pf_majs(int *printed_chars, va_list list);

#endif