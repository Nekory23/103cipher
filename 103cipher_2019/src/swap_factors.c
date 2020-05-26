/*
** EPITECH PROJECT, 2019
** 103cipher
** File description:
** swap 2 factors in a matrix
*/

#include "my.h"

void swap_factors(float **r_key_m, int index1, int index2)
{
    float temp;

    temp = r_key_m[index1][index2];
    r_key_m[index1][index2] = r_key_m[index2][index1];
    r_key_m[index2][index1] = temp;
}
