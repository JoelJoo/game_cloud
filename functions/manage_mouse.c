/*
** EPITECH PROJECT, 2022
** manage mouse click
** File description:
** manage mouse click
*/

#include "my.h"
#include "myprintflib.h"
#include <SFML/Window/Event.h>
#include <stddef.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>

void manage_mouse_click(sfMouseButtonEvent event, killer *win)
{
    int score = 0;
    if (event.type == sfEvtMouseButtonPressed) {
        my_printf("x = %d, y = %d\n", event.x, event.y);
    }
/*    sfVector2f pos_bird = sfSprite_getPosition(win->sp);
    if (event.type == sfEvtMouseButtonPressed) {
        if (pos_bird.x <= event.x && pos_bird.y <= event.y &&
            pos_bird.x + 110 >= event.x && pos_bird.y + 110 >= event.y) {
            win->x = 10; win->y = rand() % 600;
            win->kill_sound = sfMusic_createFromFile("kill.ogg");
            sfMusic_play(win->kill_sound);
            }
            }*/
}

/*void manage_mouse_click(sfMouseButtonEvent event)
{
    int score = 0;
    if (event.type == sfEvtMouseButtonPressed) {
        my_printf("x = %d, y = %d\n", event.x, event.y);
    }
}
*/
