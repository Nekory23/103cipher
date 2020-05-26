/*
** EPITECH PROJECT, 2019
** 103cipher
** File description:
** reverse the key
*/

#include "my.h"

float calc_det_3x3(int **key_m)
{
    float det;
    int cof1 = (key_m[1][1] * key_m[2][2]) - (key_m[1][2] * key_m[2][1]);
    int cof2 = (key_m[1][0] * key_m[2][2]) - (key_m[1][2] * key_m[2][0]);
    int cof3 = (key_m[1][0] * key_m[2][1]) - (key_m[2][0] * key_m[1][1]);

    cof1 = key_m[0][0] * cof1;
    cof2 = (key_m[0][1] * cof2) * -1;
    cof3 = key_m[0][2] * cof3;
    det = cof1 + cof2 + cof3;
    return (det);
}

float **reverse_3x3_key(int matrix_sqrt, int **key_m, float **r_key_m)
{
    float det = calc_det_3x3(key_m);
    float **cof_m = create_cofactor_m(matrix_sqrt, key_m);

    det = 1 / det;
    for (int i = 0; i != matrix_sqrt; i++)
        for (int j = 0; j != matrix_sqrt; j++)
            r_key_m[i][j] = det * cof_m[i][j];
    swap_factors(r_key_m, 0, 1);
    swap_factors(r_key_m, 2, 0);
    swap_factors(r_key_m, 1, 2);
    free(cof_m);
    return (r_key_m);
}

float **reverse_2x2_key(int matrix_sqrt, int **key_m, float **r_key_m)
{
    float det;
    int temp;

    det = (key_m[0][0] * key_m[1][1]) - (key_m[0][1] * key_m[1][0]);
    det = 1 / det;
    key_m[0][1] = key_m[0][1] * -1;
    key_m[1][0] = key_m[1][0] * -1;
    temp = key_m[0][0];
    key_m[0][0] = key_m[1][1];
    key_m[1][1] = temp;
    for (int i = 0; i != matrix_sqrt; i++)
        for (int j = 0; j != matrix_sqrt; j++)
            r_key_m[i][j] = det * key_m[i][j];
    return (r_key_m);
}

float **reverse_1x1_key(int matrix_sqrt, int **key_m, float **r_key_m)
{
    r_key_m[0][0] = 1 / key_m[0][0];
    return (r_key_m);
}

float **reverse_key(int matrix_sqrt, int **key_m)
{
    float det;
    int temp;
    float **r_key_m = create_reverse_key_m(matrix_sqrt);

    if (matrix_sqrt == 1)
        r_key_m = reverse_1x1_key(matrix_sqrt, key_m, r_key_m);
    if (matrix_sqrt == 2)
        r_key_m = reverse_2x2_key(matrix_sqrt, key_m, r_key_m);
    if (matrix_sqrt == 3)
        r_key_m = reverse_3x3_key(matrix_sqrt, key_m, r_key_m);
    return (r_key_m);
}
