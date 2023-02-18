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

    mi->t_first = sfTexture_createFromFile("1.jpg", NULL);
    mi->s_first = sfSprite_create();
    
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
    mi->t_agent = sfTexture_createFromFile("agent.png", NULL);
    mi->s_agent = sfSprite_create();

    mi->text = sfText_create();
    mi->font = sfFont_createFromFile("plus_channel/pluschannel.ttf");
    
    sfSprite_setTexture(mi->s_first, mi->t_first, sfTrue);
    sfSprite_setTexture(mi->sprite, mi->texture, sfTrue);
    sfSprite_setTexture(mi->s_off, mi->t_off, sfTrue);
    sfSprite_setTexture(mi->s_start, mi->t_start, sfTrue);
    sfSprite_setTexture(mi->s_fond1, mi->t_fond1, sfTrue);
    sfSprite_setTexture(mi->s_fond2, mi->t_fond2, sfTrue);
    sfSprite_setTexture(mi->s_vie, mi->t_vie, sfTrue);
    sfSprite_setTexture(mi->s_agent, mi->t_agent, sfTrue);

    sfVector2f pos_text = {350, 891};
    sfText_setPosition(mi->text, pos_text);

    
    sfVector2f off_pos = {1859, 26};
    sfSprite_setPosition(mi->s_off, off_pos);
    sfVector2f start_pos = {880, 766};
    sfSprite_setPosition(mi->s_start, start_pos);

    sfVector2f scale_first = {1.6, 1.17};
    sfSprite_setScale(mi->s_first, scale_first);
    sfVector2f scale = {1.49, 1.5};
    sfSprite_setScale(mi->sprite, scale);
    sfVector2f agent_scale = {1.9, 1.9};
    sfSprite_setScale(mi->s_agent, agent_scale);
    sfVector2f scale1 = {1.5, 1.47};
    sfSprite_setScale(mi->s_fond1, scale1);
    sfSprite_setScale(mi->s_fond2, scale1);

    mi->music = sfMusic_createFromFile("sond1.ogg");
    
    mi->window = sfRenderWindow_create(mi->video, "Mission impossible", sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(mi->window, 30);
}
