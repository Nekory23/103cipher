/*
** EPITECH PROJECT, 2019
** 103cipher
** File description:
** split all the numbers
*/

#include "my.h"

int get_nbr(char *message)
{
    int nbr = 1;

    for (int i = 0; message[i] != '\0'; i++)
        if (message[i] == ' ')
            nbr++;
    return (nbr);
}

char **split_numbers(char *message)
{
    int nbr = get_nbr(message);
    int temp = 0;
    char **split = malloc(sizeof(char *) * nbr);
    int k = 0;

    for (int j = 0; message[temp] != '\0'; temp++) {
        if (message[temp] == ' ')
            j++;
        split[j] = malloc(sizeof(char) * (temp + 1));
    }
    temp = 0;
    for (int j = 0; message[temp] != '\0'; temp++, k++) {
        if (message[temp] == ' ') {
            split[j][temp] == '\0';
            j++;
            temp++;
            k = 0;
        }
        split[j][k] = message[temp];
    }
    return (split);
}
