/*
** EPITECH PROJECT, 2019
** 103cipher
** File description:
** to make the product of 2 matrices
*/

#include "my.h"

int compute_dec(float **r_key_m, float **message_m, int i, int j, int matrix_sqrt)
{
    float temp = 0;
    int nbr;

    for (int z = 0; z != matrix_sqrt; z++)
        temp += message_m[i][z] * r_key_m[z][j];
    nbr = round(temp);
    return (nbr);
}

int compute_enc(int **key_m, int **message_m, int i, int j, int matrix_sqrt)
{
    int temp = 0;

    for (int z = 0; z != matrix_sqrt; z++)
        temp += message_m[i][z] * key_m[z][j];
    return (temp);
}

void compute_matrix_dec(float **r_key_m, float **message_m, int matrix_sqrt, int line_nbr)
{
    int **result_m = create_res_matrix(matrix_sqrt, line_nbr);

    for (int i = 0; i != line_nbr; i++)
        for (int j = 0; j != matrix_sqrt; j++)
            result_m[i][j] = compute_dec(r_key_m, message_m, i, j, matrix_sqrt);
    for (int i = 0; i != line_nbr; i++)
        for (int j = 0; j != matrix_sqrt; j++) {
            if (result_m[i][j] < ' ' || result_m[i][j] > '~')
                break;
            printf("%c", result_m[i][j]);
        }
    printf("\n");
    free(result_m);
}

void compute_matrix_enc(int **key_m, int **message_m, int matrix_sqrt, int line_nbr)
{
    int **result_m = create_res_matrix(matrix_sqrt, line_nbr);

    for (int i = 0; i != line_nbr; i++)
        for (int j = 0; j != matrix_sqrt; j++)
            result_m[i][j] = compute_enc(key_m, message_m, i, j, matrix_sqrt);
    for (int i = 0; i != line_nbr; i++)
        for (int j = 0; j != matrix_sqrt; j++) {
            if (i == line_nbr - 1 && j == matrix_sqrt - 1) {
                printf("%d\n", result_m[i][j]);
                break;
            }
            printf("%d ", result_m[i][j]);
        }
    free(result_m);
}
