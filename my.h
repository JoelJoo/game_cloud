/*
** EPITECH PROJECT, 2023
** my
** File description:
** my.h
*/

#ifndef MY_H
    #define MY_H
    #include <SFML/Graphics/RenderWindow.h>
    #include <unistd.h>
    #include <SFML/Graphics.h>
    #include <time.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <SFML/System/Export.h>
    #include <SFML/Audio/Export.h>
    #include <SFML/Audio/Music.h>
    #include <SFML/System/Types.h>

struct skala {
    sfRenderWindow *window;
    sfVideoMode video;
    sfEvent event;
    sfIntRect rect;
    sfClock *clock;
    sfTime time;
    sfTexture* texture;
    sfSprite* sprite;
    sfTexture* t_first;
    sfSprite* s_first;
    sfTexture* t_off;
    sfSprite* s_off;
    sfTexture* t_start;
    sfSprite* s_start;
    sfTexture* t_fond1;
    sfSprite* s_fond1;
    sfTexture* t_fond2;
    sfSprite* s_fond2;
    sfTexture* t_vie;
    sfSprite* s_vie;
    sfTexture* t_agent;
    sfSprite* s_agent;
    sfText *text;
    sfFont *font;
    sfMusic *music;
    int pos_agent_x;
    int pos_agent_y;
    double x;
    double y;
};

typedef struct skala skala;

void sprite_texture(skala *mi);

void draw(skala *mi);

void destroy(skala *mi);

void close_window(skala *mi);

void move_rect(skala *mi, int max_value);

void move_rigth(skala *mi, float seconds);

void move_left(skala *mi);

#endif
