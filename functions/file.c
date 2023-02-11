#include "myprintflib.h"
#include "my.h"

char *charge_map(int ac, char **av)
{
    struct stat info;
    stat (av[1], &info);
    int a = info.st_size;
    char *buffer; buffer = malloc(sizeof(char) * (a + 1));
    int sd = open(av[1], O_RDONLY);
    int r = read(sd, buffer, a);
    close(sd);
    return (buffer);
}

int height(char const *str)
{
    int i = 0; int j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            j++;
    }
    return (j);
}

int width(char const *str)
{
    int i = 0; int k = 0;
    while (str[i] != '\n') {
        i++;
    }
    return (i);
}

int error(int ac, char**av)
{
    struct stat stater;
    if (stat(av[1], &stater) == -1) {
        my_putstr("file does not exist\n");
        exit (84);
    }
    if (ac == 1)
        exit (84);
    if (ac > 2)
        exit (84);
}

char **malloqueur(int ac, char **av)
{
    char *str = charge_map(ac, av);
    int len = height(str), wi = width(str);
    int i = 0, x = 0;
    char **alou = malloc(sizeof(char*) * (len + 2));
    for (; i < len; i++) {
        alou[i] = malloc(sizeof(char) * (wi + 2));
    }
    int k = 0, j = 0;
    for (k = 0; k < len; k++) {
        for (j = 0; j < wi + 1 && str[x]; j++) {
            alou[k][j] = str[x];
            x++;
        }
        alou[k][j] = '\0';
    }
    alou[k] = NULL;
    return alou;
    free(alou);
}
