/*
** EPITECH PROJECT, 2022
** move rect
** File description:
** mode rect
*/
#include "my.h"
#include "myprintflib.h"

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    if (rect->left == max_value - offset) {
        rect->left = 0;
    } else {
        rect->left = rect->left + offset;
    }
}
