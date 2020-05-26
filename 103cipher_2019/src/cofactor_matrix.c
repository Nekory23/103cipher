/*
** EPITECH PROJECT, 2019
** 103cipher
** File description:
** create the cofactor matrix
*/

#include "my.h"

float **create_cofactor_m(int matrix_sqrt, int **key_m)
{
    float **cof_m = create_reverse_key_m(matrix_sqrt);

    cof_m[0][0] = (key_m[1][1] * key_m[2][2]) - (key_m[1][2] * key_m[2][1]);
    cof_m[0][1] = ((key_m[1][0] * key_m[2][2]) - (key_m[2][0] * key_m[1][2])) * -1;
    cof_m[0][2] = (key_m[1][0] * key_m[2][1]) - (key_m[2][0] * key_m[1][1]);
    cof_m[1][0] = ((key_m[0][1] * key_m[2][2]) - (key_m[2][1] * key_m[0][2])) * -1;
    cof_m[1][1] = (key_m[0][0] * key_m[2][2]) - (key_m[2][0] * key_m[0][2]);
    cof_m[1][2] = ((key_m[0][0] * key_m[2][1]) - (key_m[2][0] * key_m[0][1])) * -1;
    cof_m[2][0] = (key_m[0][1] * key_m[1][2]) - (key_m[0][2] * key_m[1][1]);
    cof_m[2][1] = ((key_m[0][0] * key_m[1][2]) - (key_m[1][0] * key_m[0][2])) * -1;
    cof_m[2][2] = (key_m[0][0] * key_m[1][1]) - (key_m[0][1] * key_m[1][0]);
    return (cof_m);
}
