/*
** EPITECH PROJECT, 2022
** my_printflib
** File description:
** my_printflib
*/
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

#ifndef MYPRINTFLIB_H
    #define MYPRINTFLIB_H
int my_putstr(char const *str);
int my_putnbr(int nb);
void my_putchar(char c);
int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);
unsigned int my_putnbu(unsigned int nb);
int my_printf(const char *format, ...);
void move_rect(sfIntRect *rect, int offset, int max_value);
int manuel(int ac, char **av);
char *charge_map(int ac, char **av);
int height(char const *str);
int width(char const *str);
int error(int ac, char**av);
char **malloqueur(int ac, char **av);
#endif
