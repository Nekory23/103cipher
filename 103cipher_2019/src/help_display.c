/*
** EPITECH PROJECT, 2019
** 103cipher
** File description:
** help display
*/

#include "my.h"

void help_display(void)
{
    printf("USAGE\n");
    printf("   ./103cipher message key flag\n\n");
    printf("DESCRIPTION\n");
    printf("   message\ta message, made of ASCII characters\n");
    printf("   key\t\tthe encryption key, made of ASCII characters\n");
    printf("   flag\t\t0 for the message to be encrypted, 1 to be decrypted\n");
}
