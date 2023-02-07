/*
** EPITECH PROJECT, 2022
** sf destroyer
** File description:
** sf destroyer
*/
#include "my.h"
#include "myprintflib.h"

void window_destroy(killer *destroy)
{
    sfRenderWindow_destroy(destroy->my_hunter);
    sfSprite_destroy(destroy->my_sprite);
    sfTexture_destroy(destroy->my_texture);
    sfTexture_destroy(destroy->st);
    sfSprite_destroy(destroy->sp);
    if (destroy) {
        free(destroy);
    }
    destroy = NULL;
    //sfMusic_destroy(destroy->my_music);
    //sfMusic_destroy(destroy->kill_sound);
}
