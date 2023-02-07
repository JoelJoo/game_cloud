/*
** EPITECH PROJECT, 2022
** function to open window
** File description:
** function to open window
*/

static sfRenderWindow *create_window(unsigned int x, unsigned int y,
    unsigned int bpp, char *title)
{
    sfVideoMode video_mode = {x, y, bpp};
    return (sfRenderWindow_create(video_mode, title,
    sfResize | sfClose, NULL));
}
