/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** map
*/

#include "../../include/struct.h"

void set_map(s_str *s)
{
    sfSprite_setPosition(s->_map->s_map, s->_map->p_map);
    sfSprite_setScale(s->_map->s_map, s->_var->size);
}

void display_life(s_str *s)
{
    int life = 0;

    if (s->_char->life > 100)
        s->_char->life = 100;
    life = s->_char->life / 10;
    if (s->_char->life < 10)
        s->_char->r_life.left = 0;
    else
        s->_char->r_life.left = life * 400 - 400;
    sfSprite_setTextureRect(s->_char->s_life, s->_char->r_life);
    sfRenderWindow_drawSprite(s->_window->window, s->_char->s_life, NULL);
}

void drawn_item(s_str *s)
{
    sfRenderWindow_drawSprite(s->_window->window, s->_item->s_bar, NULL);
    for (int i = 0; i != 9; i += 1) {
        if (s->_item[i].up == 1) {
            sfSprite_setTextureRect(s->_item[i].s_item,
            s->_item[i].r_item);
            sfRenderWindow_drawSprite(s->_window->window,
            s->_item[i].s_item, NULL);
        }
    }
}

void display_map(s_str *s)
{
    sfSprite_setTextureRect(s->_map->s_map, s->_map->r_map);
    sfRenderWindow_drawSprite(s->_window->window, s->_map->s_map, NULL);
}