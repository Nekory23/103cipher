/*
** EPITECH PROJECT, 2019
** 103cipher
** File description:
** my.h
*/

#ifndef _MY_H_
#define _MY_H_

/*LIBS */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>

/* DECRYPTION */
int decryption(char *message, char *key);
int is_key_reversable(int matrix_sqrt, int **key_m);
float **create_reverse_key_m(int matrix_sqrt);
float **create_cofactor_m(int matrix_sqrt, int **key_m);
int get_line_nbr_dec(int matrix_sqrt, char *message);
char **split_numbers(char *message);
int get_nbr(char *message);
float **reverse_key(int matrix_sqrt, int **key_m);
void swap_factors(float **r_key_m, int index1, int index2);

/* ENCRYPTION */
void encryption(char *message, char *key);
int **create_res_matrix(int matrix_sqrt, int line_nbr);
int **fill_key_matrix(int **key_m, int matrix_sqrt);
int **fill_message_matrix(int **message_m, int matrix_sqrt, int line_nbr);
int get_line_nbr(int matrix_sqrt, int len_message);

/* COMPUTING */
void compute_matrix_enc(int **key_m, int **message_m, int matrix_sqrt, int line_nbr);
void compute_matrix_dec(float **r_key_m, float **message_m, int matrix_sqrt, int line_nbr);
int **create_key_matrix(int matrix_sqrt, char *key);

/* DISPLAY FUNCTIONS */
void display_reverse_key(float **r_key_m, int matrix_sqrt);
void display_key(int **key_m, int matrix_sqrt);

/* ERROR HANDLING */
int error_handling(int ac, char **av);
void help_display(void);
int my_strlen(char const *str);

/* ERROR MESSAGES */
#define ERROR_HELP "for help display try with -h\n"
#define ERROR_ARGNBR "this program must take 3 arguments (see with -h)\n"
#define ERROR_FLAG "Flag must be '0' or '1'\n"
#define ERROR_ENCARG "the message must be made of printable chararcters\n"
#define ERROR_DECARG "for decryptage the message must be encrypted\n"
#define ERROR_KDECARG "the key must be composed of printable characters\n"
#define ERROR_MATRIX "the matrix is not reversable\n"

#endif
