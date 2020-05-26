/*
** EPITECH PROJECT, 2019
** 103cipher
** File description:
** display the reversed key
*/

#include "my.h"

void display_key(int **key_m, int matrix_sqrt)
{
    for (int i = 0; i != matrix_sqrt; i++) {
        for (int j = 0; j != matrix_sqrt; j++) {
            if (j == matrix_sqrt - 1)
                printf("%d", key_m[i][j]);
            else
                printf("%d\t", key_m[i][j]);
        }
        printf("\n");
    }
}

void display_reverse_key(float **r_key_m, int matrix_sqrt)
{
    for (int i = 0; i != matrix_sqrt; i++) {
        for (int j = 0; j != matrix_sqrt; j++) {
            if (j == matrix_sqrt - 1)
                printf("%.3f", r_key_m[i][j]);
            else
                printf("%.3f\t", r_key_m[i][j]);
        }
        printf("\n");
    }
}
