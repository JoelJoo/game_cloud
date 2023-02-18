/*
** EPITECH PROJECT, 2023
** skala
** File description:
** skala
*/

#include "my.h"

void move_rect(skala *mi, int max_value)
{

    if (mi->rect.left >= max_value)
        mi->rect.left = 0;
    if (mi->rect.left <= 187)
        mi->rect.left = mi->rect.left + 64;
    else
        mi->rect.left = mi->rect.left + 63;
}


void move_rigth(skala *mi,  float seconds)
{
    if(mi->event.type  == sfEvtKeyPressed && mi->event.key.code == sfKeyRight) {
        mi->pos_agent_x = mi->pos_agent_x + 5;
        sfVector2f agent_pos1 = {mi->pos_agent_x, mi->pos_agent_y};
        sfSprite_setPosition(mi->s_agent, agent_pos1);
        if (mi->pos_agent_x >= 1600) {
            sfVector2f agent_pos2 = {1600, mi->pos_agent_y};
            sfSprite_setPosition(mi->s_agent, agent_pos2);
        }
        /* Mouve rect */
        mi->time = sfClock_getElapsedTime(mi->clock);
        seconds = mi->time.microseconds / 100000.0;        
        if (seconds > 1.5) {
            move_rect(mi, 251);
            sfSprite_setTextureRect(mi->s_agent, mi->rect);
            sfClock_restart(mi->clock);
            /* Move rect */
            
            /* Paralaxe */
            if (mi->x == -1920)
                mi->x = 1920;
            mi->x = mi->x - 5;
            sfVector2f pos = {mi->x, 1};
            sfSprite_setPosition(mi->s_fond1, pos);
            if (mi->y == -1920)
                mi->y = 1920;
            mi->y = mi->y - 5;
            sfVector2f pos1 = {mi->y, 1};
            sfSprite_setPosition(mi->s_fond2, pos1);
            /* Paralaxe */
        }
    }
}

void move_left(skala *mi)
{
    if(mi->event.type  == sfEvtKeyPressed && mi->event.key.code == sfKeyLeft) {
        mi->pos_agent_x = mi->pos_agent_x - 5;
        sfVector2f agent_pos1 = {mi->pos_agent_x, mi->pos_agent_y};
        sfSprite_setPosition(mi->s_agent, agent_pos1);
    }
}
