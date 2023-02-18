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
    sfRenderWindow_drawSprite(mi->window, mi->s_first, NULL);
    sfRenderWindow_drawText(mi->window, mi->text, NULL);
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
    sfSprite_destroy(mi->s_first);
    
    sfTexture_destroy(mi->t_fond1);
    sfTexture_destroy(mi->t_fond2);
    sfTexture_destroy(mi->t_vie);
    sfTexture_destroy(mi->t_agent);
    sfTexture_destroy(mi->texture);
    sfTexture_destroy(mi->t_off);
    sfTexture_destroy(mi->t_start);
    sfTexture_destroy(mi->t_first);
    sfMusic_destroy(mi->music);
    sfRenderWindow_destroy (mi->window);
}

void close_window(skala *mi)
{
    while (sfRenderWindow_pollEvent(mi->window, &mi->event)) {
        if (mi->event.type == sfEvtClosed)
            sfRenderWindow_close(mi->window);
    }
}
