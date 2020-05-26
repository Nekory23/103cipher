/*
** EPITECH PROJECT, 2019
** 103cipher
** File description:
** create the key matrix
*/

#include "my.h"

int **create_key_matrix(int matrix_sqrt, char *key)
{
    int **key_m = malloc(sizeof(int *) * matrix_sqrt);
    int len = 0;

    for (int i = 0; i != matrix_sqrt; i++)
        key_m[i] = malloc(sizeof(int) * matrix_sqrt);
    key_m = fill_key_matrix(key_m, matrix_sqrt);
    for (int i = 0; i != matrix_sqrt; i++) {
        for (int j = 0; j != matrix_sqrt; j++) {
            key_m[i][j] = key[len];
            if (key[len] == '\0')
                break;
            len++;
        }
    }
    return (key_m);
}
