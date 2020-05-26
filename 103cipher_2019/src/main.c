/*
** EPITECH PROJECT, 2019
** 103cipher
** File description:
** encrypt and decrypt messages
*/

#include "my.h"

int cipher(int ac, char **av)
{
    if (av[3][0] == '0')
        encryption(av[1], av[2]);
    else
        if (decryption(av[1], av[2]) == 1)
            return (84);
    return (0);
}

int main(int ac, char **av)
{
    if (ac == 2) {
        if (my_strlen(av[1]) == 2 && av[1][0] == '-' && av[1][1] == 'h') {
            help_display();
            return (0);
        } else {
            write(2, ERROR_HELP, my_strlen(ERROR_HELP));
            return (84);
        }
    }
    if (error_handling(ac, av) == 84)
        return (84);
    if (cipher(ac, av) == 84)
        return (84);
    return (0);
}
