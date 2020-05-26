/*
** EPITECH PROJECT, 2019
** 103cipher
** File description:
** decrypt messages
*/

#include "my.h"

float **create_message_matrix_dec(int matrix_sqrt, char *message)
{
    int line_nbr = get_line_nbr_dec(matrix_sqrt, message);
    float **message_m = malloc(sizeof(float *) * line_nbr);
    char **split = split_numbers(message);
    int temp = 0;
    int nbr = get_nbr(message);

    for (int i = 0; i != line_nbr; i++)
        message_m[i] = malloc(sizeof(float) * matrix_sqrt);
    for (int i = 0; i != line_nbr; i++)
        for (int j = 0; j != matrix_sqrt; j++) {
            message_m[i][j] = atof(split[temp]);
            if (temp == nbr - 1)
                break;
            temp++;
        }
    return (message_m);
}

int decryption(char *message, char *key)
{
    int matrix_sqrt = ceil(sqrt(my_strlen(key)));
    int **key_m = create_key_matrix(matrix_sqrt, key);
    float **r_key_m;
    float **message_m = create_message_matrix_dec(matrix_sqrt, message);
    int line_nbr = get_line_nbr_dec(matrix_sqrt, message);

    if (is_key_reversable(matrix_sqrt, key_m) == 1)
        return (1);
    r_key_m = reverse_key(matrix_sqrt, key_m);
    printf("Key matrix:\n");
    display_reverse_key(r_key_m, matrix_sqrt);
    printf("\nDecrypted message:\n");
    compute_matrix_dec(r_key_m, message_m, matrix_sqrt, line_nbr);
    free(r_key_m);
    free(message_m);
    return (0);
}
