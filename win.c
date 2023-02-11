/*
** EPITECH PROJECT, 2022
** win.c
** File description:
** window
*/

#include "my.h"

void pos_button(skala *mi)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(mi->window);
    if (mouse.x >= 890 && mouse.x <= 1101 &&
        mouse.y >= 780 && mouse.y <= 823) {
        sfVector2f scale = {1.2, 1.2};
        sfSprite_setScale(mi->s_start, scale);
        if (mi->event.type == sfEvtMouseButtonPressed) {
            sfVector2f pos = {-50000, -50000};
            sfSprite_setPosition(mi->sprite, pos);
            sfSprite_setPosition(mi->s_start, pos);
            //sfSprite_setPosition(mi->s_off, pos);
        }
    } else {
        sfVector2f scale = {1, 1};
        sfSprite_setScale(mi->s_start, scale);
    }
    if (mouse.x >= 1863 && mouse.x <= 1900 &&
        mouse.y >= 33 && mouse.y <= 66) {
        sfVector2f off = {0.12, 0.12};
        sfSprite_setScale(mi->s_off, off);
        if (mi->event.type == sfEvtMouseButtonPressed) {
            sfRenderWindow_close(mi->window);
        }
    } else {
        sfVector2f off = {0.1, 0.1};
        sfSprite_setScale(mi->s_off, off);
    }
    if (mi->event.type == sfEvtMouseButtonPressed) {
        printf("x = %d; y = %d\n", mouse.x, mouse.y);
    }
}

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    if (rect->left == max_value) {
        rect->left = 0;
    } else {
        rect->left = rect->left + 110;
    }
}

void close_window(skala *mi)
{
    while (sfRenderWindow_pollEvent(mi->window, &mi->event)) {
        if (mi->event.type == sfEvtClosed)
            sfRenderWindow_close(mi->window);
    }
}

int win()
{
    double x = 0, y = 1920;
    skala mi;
    sprite_texture(&mi);
    while (sfRenderWindow_isOpen(mi.window)) {
        close_window(&mi);
        sfRenderWindow_clear(mi.window, sfBlack);
        pos_button(&mi);
        if (x == -1920)
            x = 1920;
        x = x - 1;
        sfVector2f pos = {x, 1};
        sfSprite_setPosition(mi.s_fond1, pos);
        if (y == -1920)
            y = 1920;
        y = y - 1;
        sfVector2f pos1 = {y, 1};
        sfSprite_setPosition(mi.s_fond2, pos1);
        draw(&mi);
    }
    destroy(&mi);
    return (0);
}

int main(void)
{
    win();
    return 0;
}
