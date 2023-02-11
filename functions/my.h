/*
** EPITECH PROJECT, 2022
** my_printflib
** File description:
** my_printflib
*/

#include <SFML/Window/Event.h>
#include <stddef.h>
#include "myprintflib.h"
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <SFML/Audio/Music.h>
#include <SFML/Audio/Music.h>
#include <SFML/Audio/Sound.h>

#ifndef ELEMENTS_H
    #define ELEMENTS_H
typedef struct hunter{
    sfRenderWindow *my_hunter;
    sfEvent event;
    sfIntRect rect;
    sfVector2f pos;
    sfMusic *my_music;
    sfMouseButtonEvent mousevent;
    sfTexture *my_texture;
    sfVector2i bird_posi;
    sfSprite *my_sprite;
    sfTexture *st;
    sfSprite *sp;
    sfMusic *kill_sound;
    int x;
    int y;
    sfVector2f scale;
    sfVector2f scale2;
}killer;
void window_sprite(killer *win);
void window_destroy(killer *destroy);
void close_window(sfRenderWindow *my_hunter, sfEvent event, killer *win);
void window_sprite(killer *win);
void manage_mouse_click(sfMouseButtonEvent event, killer *win);
//void manage_mouse_click(sfMouseButtonEvent event, killer *win);*/
#endif
