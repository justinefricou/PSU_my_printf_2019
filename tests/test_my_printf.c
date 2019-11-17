/*
** EPITECH PROJECT, 2019
** test_my_printf.c
** File description:
** my_printf : tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

Test(my_printf, single_specifier_case, .init=cr_redirect_stdout)
{
    char str[5];
    str[0] = 'l';
    str[1] = '\t';
    str[2] = 20;
    str[3] = '2';
    str[4] = '\0';
    cr_expect_eq(my_printf("%c", 'h'), 1);
    cr_expect_eq(my_printf("%s", "ey"), 2);
    cr_expect_eq(my_printf("%i", -1203), 5);
    cr_expect_eq(my_printf("%d", -0), 1);
    cr_expect_eq(my_printf("%u", -789), 3);
    cr_expect_eq(my_printf("%o", 753), 4);
    cr_expect_eq(my_printf("%x", 8542), 4);
    cr_expect_eq(my_printf("%X", 6874), 4);
    cr_expect_eq(my_printf("%S", str), 10);
    cr_expect_stdout_eq_str("hey-120307891361215e1ADAl\\11\\242\\0");
}

Test(my_printf, binary, .init=cr_redirect_stdout)
{
    cr_expect_eq(my_printf("%b", 0), 1);
    cr_expect_eq(my_printf("%b", 1), 1);
    cr_expect_eq(my_printf("%b", 15), 4);
    cr_expect_eq(my_printf("%b", 852), 10);
    cr_expect_eq(my_printf("%b", 123456789), 27);
    cr_expect_eq(my_printf("%b", 987456), 20);
    cr_expect_stdout_eq_str("0111111101010100111010110111100110100010101"
                            "11110001000101000000");
}
