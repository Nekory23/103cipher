/*
** EPITECH PROJECT, 2019
** 103cipher
** File description:
** is the key reversable
*/

#include "my.h"

int is_3x3_key_reversable(int **key_m)
{
    int det;
    int cof1 = (key_m[1][1] * key_m[2][2]) - (key_m[1][2] * key_m[2][1]);
    int cof2 = (key_m[1][0] * key_m[2][2]) - (key_m[1][2] * key_m[2][0]);
    int cof3 = (key_m[1][0] * key_m[2][1]) - (key_m[2][0] * key_m[1][1]);

    cof1 = key_m[0][0] * cof1;
    cof2 = key_m[0][1] * cof2 * - 1;
    cof3 = key_m[0][2] * cof3;
    det = cof1 + cof2 + cof3;
    if (det == 0) {
        write(2, ERROR_MATRIX, my_strlen(ERROR_MATRIX));
        return (1);
    }
    return (0);
}

int is_key_reversable(int matrix_sqrt, int **key_m)
{
    int det;

    if (matrix_sqrt == 1)
        if (key_m[0][0] == 0)
            return (1);
    if (matrix_sqrt == 2) {
        det = (key_m[0][0] * key_m[1][1]) - (key_m[0][1] * key_m[1][0]);
        if (det == 0) {
            write(2, ERROR_MATRIX, my_strlen(ERROR_MATRIX));
            return (1);
        }
    }
    if (matrix_sqrt == 3)
        if (is_3x3_key_reversable(key_m) == 1)
            return (1);
    return (0);
}
