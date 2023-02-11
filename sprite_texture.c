/*
** EPITECH PROJECT, 2023
** skala
** File description:
** skala
*/

#include "my.h"

void sprite_texture(skala *mi)
{
    mi->video.width = 1920;
    mi->video.height = 1080;
    mi->video.bitsPerPixel = 32;
    mi->texture = sfTexture_createFromFile("fond2.jpg", NULL);
    mi->sprite = sfSprite_create();
    
    mi->t_off = sfTexture_createFromFile("off2.png", NULL);
    mi->s_off = sfSprite_create();
    
    mi->t_start = sfTexture_createFromFile("start1.png", NULL);
    mi->s_start = sfSprite_create();

    mi->t_fond1 = sfTexture_createFromFile("dehors5.png", NULL);
    mi->s_fond1 = sfSprite_create();
    mi->t_fond2 = sfTexture_createFromFile("dehors5.png", NULL);
    mi->s_fond2 = sfSprite_create();

    mi->t_vie = sfTexture_createFromFile("set.png", NULL);
    mi->s_vie = sfSprite_create();
    mi->t_agent = sfTexture_createFromFile("set.png", NULL);
    mi->s_agent = sfSprite_create();
    
    sfSprite_setTexture(mi->sprite, mi->texture, sfTrue);
    sfSprite_setTexture(mi->s_off, mi->t_off, sfTrue);
    sfSprite_setTexture(mi->s_start, mi->t_start, sfTrue);
    sfSprite_setTexture(mi->s_fond1, mi->t_fond1, sfTrue);
    sfSprite_setTexture(mi->s_fond2, mi->t_fond2, sfTrue);
    sfSprite_setTexture(mi->s_vie, mi->t_vie, sfTrue);
    sfSprite_setTexture(mi->s_agent, mi->t_agent, sfTrue);
    
    sfVector2f off_pos = {1859, 26};
    sfSprite_setPosition(mi->s_off, off_pos);
    sfVector2f start_pos = {880, 766};
    sfSprite_setPosition(mi->s_start, start_pos);
    sfVector2f agent_pos = {0, 850};
    sfSprite_setPosition(mi->s_agent, agent_pos);
    
    sfVector2f scale = {1.49, 1.5};
    sfSprite_setScale(mi->sprite, scale);
    sfVector2f agent_scale = {1.9, 1.9};
    sfSprite_setScale(mi->s_agent, agent_scale);
    sfVector2f scale1 = {1.5, 1.47};
    sfSprite_setScale(mi->s_fond1, scale1);
    sfSprite_setScale(mi->s_fond2, scale1);

    mi->window = sfRenderWindow_create(mi->video, "Mission impossible", sfDefaultStyle, NULL);
}
