/*
** EPITECH PROJECT, 2019
** 103cipher
** File description:
** error handling
*/

#include "my.h"

int error_handling_decrypt(int ac, char **av)
{
    int j = 0;

    while (av[1][j] != '\0') {
        if (av[1][j] >= '0' && av[1][j] <= '9' || av[1][j] == ' ')
            j++;
        else {
            write(2, ERROR_DECARG, my_strlen(ERROR_DECARG));
            return (84);
        }
    }
    j = 0;
    while (av[2][j] != '\0') {
        if (av[2][j] >= ' ' && av[2][j] <= '~')
            j++;
        else {
            write(2, ERROR_KDECARG, my_strlen(ERROR_KDECARG));
            return (84);
        }
    }
    return (0);
}

int error_handling_encrypt(int ac, char **av)
{
    int j;

    for (int i = 1; i != 2; i++) {
        j = 0;
        while (av[i][j] != '\0') {
            if (av[i][j] >= ' ' && av[i][j] <= '~')
                j++;
            else {
                write(2, ERROR_ENCARG, my_strlen(ERROR_ENCARG));
                return (84);
            }
        }
    }
    return (0);
}

int error_handling(int ac, char **av)
{
    if (ac != 4) {
        write(2, ERROR_ARGNBR, my_strlen(ERROR_ARGNBR));
        return (84);
    }
    if (my_strlen(av[3]) == 1) {
        if (av[3][0] == '0') {
            if (error_handling_encrypt(ac, av) == 84)
                return (84);
            else
                return (0);
        }
        if (av[3][0] == '1') {
            if (error_handling_encrypt(ac, av) == 84)
                return (84);
            else
                return (0);
        }
        else {
            write(2, ERROR_FLAG, my_strlen(ERROR_FLAG));
            return (84);
        }
    }
    return (0);
}
