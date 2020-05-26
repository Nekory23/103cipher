/*
** EPITECH PROJECT, 2019
** 103cipher
** File description:
** get the number of lines for the message matrix
*/

#include "my.h"

int get_line_nbr_dec(int matrix_sqrt, char *message)
{
    int line_nbr;
    int temp = 1;

    for (int i = 0; message[i] != '\0'; i++)
        if (message[i] == ' ')
            temp = temp + 1;
    line_nbr = temp / matrix_sqrt;
    if (temp % matrix_sqrt != 0)
        line_nbr++;
    return (line_nbr);
}

int get_line_nbr(int matrix_sqrt, int len_message)
{
    int line_nbr = (len_message / matrix_sqrt);

    if (len_message % matrix_sqrt != 0)
        line_nbr++;
    return (line_nbr);
}
