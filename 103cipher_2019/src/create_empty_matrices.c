/*
** EPITECH PROJECT, 2019
** 103cipher
** File description:
** create empty matrices
*/

#include "my.h"

int **create_res_matrix(int matrix_sqrt, int line_nbr)
{
    int **result_m = malloc(sizeof(int *) * line_nbr);

    for (int i = 0; i != line_nbr; i++)
        result_m[i] = malloc(sizeof(int) * matrix_sqrt);
    for (int i = 0; i != line_nbr; i++)
        for (int j = 0; j != matrix_sqrt; j++)
            result_m[i][j] = 0;
    return (result_m);
}

float **create_reverse_key_m(int matrix_sqrt)
{
    float **r_key_m = malloc(sizeof(float *) * matrix_sqrt);

    for (int i = 0; i != matrix_sqrt; i++)
        r_key_m[i] = malloc(sizeof(float) * matrix_sqrt);
    for (int i = 0; i != matrix_sqrt; i++)
        for (int j = 0; j != matrix_sqrt; j++)
            r_key_m[i][j] = 0;
    return (r_key_m);
}
