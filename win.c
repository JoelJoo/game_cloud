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
            sfMusic_play(mi->music);
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

int win()
{
    skala mi;
    mi.rect.top = 0; mi.rect.left = 0;
    mi.rect.width = 65 , mi.rect.height = 90;
    
    mi.clock = sfClock_create();
    float seconds = 0.0;
    mi. x = 0, mi.y = 1920;
    
    sfVector2f scale_text = {2, 2};
    
    sprite_texture(&mi);
    sfSprite_setTextureRect(mi.s_agent, mi.rect);

    mi.pos_agent_x = 0, mi.pos_agent_y = 850;
    sfVector2f agent_pos = {mi.pos_agent_x, mi.pos_agent_y};
    sfSprite_setPosition(mi.s_agent, agent_pos);

    while (sfRenderWindow_isOpen(mi.window)) {

        sfText_setString(mi.text, "Appuyez sur la touche directionnelle haut pour continuer");
        sfText_setFont(mi.text, mi.font);
        sfText_setColor(mi.text, sfWhite);
        sfText_setScale(mi.text, scale_text);
        
        move_rigth(&mi, seconds);
        move_left(&mi);
        
        if (mi.event.type  == sfEvtKeyPressed && mi.event.key.code == sfKeyUp) {
            sfVector2f pos = {-50000, -50000};
            sfSprite_setPosition(mi.s_first, pos);
            sfText_setPosition(mi.text, pos);
        }
        sfRenderWindow_clear(mi.window, sfBlack);
        
        close_window(&mi);
        pos_button(&mi);
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
