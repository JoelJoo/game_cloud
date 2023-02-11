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
    #include <stdlib.h>
    #include <stdio.h>

struct skala {
    sfRenderWindow *window;
    sfVideoMode video;
    sfEvent event;
    sfTexture* texture;
    sfSprite* sprite;
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
};

typedef struct skala skala;

void sprite_texture(skala *mi);

void draw(skala *mi);

void destroy(skala *mi);

#endif
