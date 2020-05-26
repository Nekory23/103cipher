/*
** EPITECH PROJECT, 2019
** 103cipher
** File description:
** encrypt messages
*/

#include "my.h"

int **create_message_matrix_enc(int matrix_sqrt, char *message)
{
    int len = 0;
    int line_nbr = get_line_nbr(matrix_sqrt, my_strlen(message));
    int **message_m;

    message_m = malloc(sizeof(int *) * line_nbr);
    for (int i = 0; i != line_nbr; i++)
        message_m[i] = malloc(sizeof(int) * matrix_sqrt);
    message_m = fill_message_matrix(message_m, matrix_sqrt, line_nbr);
    for (int i = 0; i != line_nbr; i++)
        for (int j = 0; j != matrix_sqrt; j++) {
            message_m[i][j] = message[len];
            if (message[len] == '\0')
                break;
            len++;
        }
    return (message_m);
}

void encryption(char *message, char *key)
{
    int matrix_sqrt = ceil(sqrt(my_strlen(key)));
    int **key_m = create_key_matrix(matrix_sqrt, key);
    int **message_m = create_message_matrix_enc(matrix_sqrt, message);
    int line_nbr = get_line_nbr(matrix_sqrt, my_strlen(message));

    printf("Key matrix:\n");
    display_key(key_m, matrix_sqrt);
    printf("\nEncrypted message:\n");
    compute_matrix_enc(key_m, message_m, matrix_sqrt, line_nbr);
    free(key_m);
    free(message_m);
}
