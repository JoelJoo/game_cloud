/*
** EPITECH PROJECT, 2023
** skala
** File description:
** skala
*/

#include "my.h"

void draw(skala *mi)
{
    sfRenderWindow_drawSprite(mi->window, mi->s_fond1, NULL);
    sfRenderWindow_drawSprite(mi->window, mi->s_fond2, NULL);
    sfRenderWindow_drawSprite(mi->window, mi->s_vie, NULL);
    sfRenderWindow_drawSprite(mi->window, mi->s_agent, NULL);
    sfRenderWindow_drawSprite(mi->window, mi->sprite, NULL);
    sfRenderWindow_drawSprite(mi->window, mi->s_off, NULL);
    sfRenderWindow_drawSprite(mi->window, mi->s_start, NULL);
    sfRenderWindow_display (mi->window);
}

void destroy(skala *mi)
{
    sfSprite_destroy(mi->s_fond1);
    sfSprite_destroy(mi->s_fond2);
    sfSprite_destroy(mi->s_vie);
    sfSprite_destroy(mi->s_agent);
    sfSprite_destroy(mi->sprite);
    sfSprite_destroy(mi->s_off);
    sfSprite_destroy(mi->s_start);
    sfRenderWindow_destroy (mi->window);
}
