/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** char
*/

#include "../../include/struct.h"

void set_char(s_str *s)
{
    sfSprite_setPosition(s->_char->s_char, s->_char->p_char);
    sfSprite_setPosition(s->_map->s_map1, s->_map->p_map1);
    sfSprite_setScale(s->_map->s_map1, s->_var->size);
    sfSprite_setPosition(s->_map->s_parti, s->_map->p_parti);
    s->_map->p_shad.x = s->_char->p_char.x - 1990;
    sfSprite_setPosition(s->_map->s_shad, s->_map->p_shad);

    sfSprite_setPosition(s->_char->s_book, s->_char->p_book);
    sfSprite_setPosition(s->_map->s_A, s->_map->p_A);
    sfSprite_setPosition(s->_item->s_bar, s->_item->p_bar);
    for (int i = 0; i != 9; i += 1) {
        sfSprite_setPosition(s->_item[i].s_item, s->_item[i].p_item);
    }
    sfSprite_setPosition(s->_char->s_life, s->_char->p_life);
}

void particules(s_str *s)
{
    sfSprite_setTextureRect(s->_map->s_parti, s->_map->r_parti);
    sfRenderWindow_drawSprite(s->_window->window, s->_map->s_parti, NULL);
    sfSprite_setTextureRect(s->_map->s_shad, s->_map->r_shad);
    sfRenderWindow_drawSprite(s->_window->window, s->_map->s_shad, NULL);
    s->_var->time = sfClock_getElapsedTime(s->_end->clock);
    s->_var->second = s->_var->time.microseconds / 1000000.0;
    if (s->_var->second > 0.1) {
        if (s->_map->r_parti.left < 5760) {
            s->_map->r_parti.left += 1920;
        } else {
            s->_map->r_parti.left = 0;
        }
        sfClock_restart(s->_end->clock);
    }
}

void display_char(s_str *s)
{
    sfSprite_setTextureRect(s->_char->s_char, s->_char->r_char);
    sfRenderWindow_drawSprite(s->_window->window, s->_char->s_char, NULL);
    sfSprite_setTextureRect(s->_map->s_map1, s->_map->r_map1);
    sfRenderWindow_drawSprite(s->_window->window, s->_map->s_map1, NULL);
    if ((s->_var->screen > 5 && s->_var->screen < 9 && s->_var->page == 1) ||
    (s->_var->screen > 5 && s->_var->screen < 9 && s->_var->page == 5
    && s->_var->last_p2 == 1))
        particules(s);
    sfSprite_setTextureRect(s->_item->s_bar, s->_item->r_bar);
    drawn_item(s);
    display_life(s);
    if (s->_map->A == 1) {
        sfSprite_setTextureRect(s->_map->s_A, s->_map->r_A);
        sfRenderWindow_drawSprite(s->_window->window, s->_map->s_A, NULL);
    }
    if (s->_char->book == 1) {
        sfSprite_setTextureRect(s->_char->s_book, s->_char->r_book);
        sfRenderWindow_drawSprite(s->_window->window, s->_char->s_book, NULL);
    }
    text_level(s);
}
