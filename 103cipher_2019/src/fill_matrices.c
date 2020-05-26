/*
** EPITECH PROJECT, 2019
** 103cipher
** File description:
** fill the matrices
*/

#include "my.h"

int **fill_message_matrix(int **message_m, int matrix_sqrt, int line_nbr)
{
    for (int i = 0; i != line_nbr; i++)
        for (int j = 0; j != matrix_sqrt; j++)
            message_m[i][j] = 0;
    return (message_m);
}

int **fill_key_matrix(int **key_m, int matrix_sqrt)
{
    for (int i = 0; i != matrix_sqrt; i++)
        for (int j = 0; j != matrix_sqrt; j++)
            key_m[i][j] = 0;
    return (key_m);
}
