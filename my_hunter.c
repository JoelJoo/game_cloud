/*
** EPITECH PROJECT, 2022
** manage mouse click
** File description:
** manage mouse click
*/

#include "myprintflib.h"
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include "my.h"
#include <SFML/Audio/Music.h>
#include <SFML/Audio/Music.h>
#include <SFML/Audio/Sound.h>
#include <SFML/Window/Event.h>

static sfRenderWindow *create_window(unsigned int x, unsigned int y,
    unsigned int bpp, char *title)
{
    sfVideoMode video_mode = {x, y, bpp};
    return (sfRenderWindow_create(video_mode, title,
    sfClose | sfResize, NULL));
}

void close_window(sfRenderWindow *my_hunter, sfEvent event, killer *win)
{
    while (sfRenderWindow_pollEvent(win->my_hunter, &event)) {
        switch (event.type) {
        case sfEvtClosed : sfRenderWindow_close(win->my_hunter); break;
        case sfEvtKeyReleased: my_printf("key has been released\n"); break;
        }
        if (event.type == sfEvtKeyPressed) {
            if (event.key.code == sfKeyEscape) {
                sfRenderWindow_close(win->my_hunter);
            }
        }
        manage_mouse_click(event.mouseButton, win);
    }
}

void window_sprite(killer *win)
{
    win->my_hunter = create_window(1250, 650, 32, "my_hunter");
    win->my_texture = sfTexture_createFromFile("girl-anime-landscape-anime.jpg", NULL);
    win->my_sprite = sfSprite_create();
    sfSprite_setTexture(win->my_sprite, win->my_texture, sfTrue);
    win->st = sfTexture_createFromFile("start-hi.png", NULL);
    win->sp = sfSprite_create();
    sfSprite_setTexture(win->sp, win->st, sfTrue);
    /*   win->scale.x = 1.57; win->scale.y = 1.32; win->scale2.x = 0.4;
    win->scale2.y = 0.4;
    win->pos.x = 500; win->pos.y = 250;*/
    //sfSprite_setTexture(win->my_sprite, win->my_texture, sfFalse);
//    win->st = sfTexture_createFromFile("bird.png", NULL);
    //  win->sp = sfSprite_create();
    // win->my_music = sfMusic_createFromFile("Poussin.ogg");
    // sfMusic_play(win->my_music);
    //win->rect.top = 0; win->rect.left = 0; win->rect.width = 110;
    //win->rect.height = 110;
}

void scale_and_position(killer *win)
{
    win->scale.x = 1.57; win->scale.y = 1.32; win->scale2.x = 0.4;
    win->scale2.y = 0.4;
    win->pos.x = 500; win->pos.y = 250;
}

void mouse_position(killer *win)
{
    //   sfVector2i sfMouse_getposition(win->my_hunter);
}

int main(int ac, char **av)
{
    sfEvent event; killer *win = malloc(sizeof(killer)); window_sprite(win);
    scale_and_position(win);
    while (sfRenderWindow_isOpen(win->my_hunter)) {
        sfRenderWindow_display(win->my_hunter);
        sfSprite_setScale(win->my_sprite, win->scale);
        sfRenderWindow_drawSprite(win->my_hunter, win->my_sprite, NULL);
        sfSprite_setScale(win->sp, win->scale2);
        sfSprite_setPosition(win->sp, win->pos);
        sfRenderWindow_drawSprite(win->my_hunter, win->sp, NULL);
        close_window(win->my_hunter, win->event, win);
    }
    window_destroy(win);
}
