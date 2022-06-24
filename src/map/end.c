/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** char
*/

#include "../../include/struct.h"

void item_pos(s_str *s)
{
    int x = 0;
    s->_item->p_bar.x = s->_char->p_char.x - 170;
    s->_item->p_bar.y = s->_char->p_char.y + 320;
    sfSprite_setPosition(s->_item->s_bar, s->_item->p_bar);
    for (int i = 0; i != 9; i += 1) {
        s->_item[i].p_item.x = s->_char->p_char.x - 149 + x;
        s->_item[i].p_item.y = s->_char->p_char.y + 335;
        sfSprite_setPosition(s->_item[i].s_item, s->_item[i].p_item);
        x += 42;
    }
    s->_char->p_life.x = s->_char->p_char.x + 400;
    s->_char->p_life.y = s->_char->p_char.y + 340;
    sfSprite_setPosition(s->_char->s_life, s->_char->p_life);
    s->_map->p_A.x = s->_char->p_char.x - 400;
    s->_map->p_A.y = s->_char->p_char.y + 340;
    sfSprite_setPosition(s->_map->s_A, s->_map->p_A);
}

void set_end(s_str *s)
{
    sfSprite_setPosition(s->_end->s_end, s->_end->p_end);
    sfSprite_setPosition(s->_char->s_char, s->_char->p_char);
    sfSprite_setPosition(s->_end->s_drak, s->_end->p_drak);
    sfSprite_setPosition(s->_end->s_end2, s->_end->p_end2);
    s->_end->pos_cam.x = s->_char->p_char.x;
    s->_end->pos_cam.y = s->_char->p_char.y - 120;
    sfView_setCenter(s->_end->camera, s->_end->pos_cam);
    sfRenderWindow_setView(s->_window->window, s->_end->camera);

    item_pos(s);
}

void move_drak(s_str *s)
{
    s->_var->time = sfClock_getElapsedTime(s->_end->clock);
    s->_var->second = s->_var->time.microseconds / 1000000.0;
    if (s->_var->second > 0.1) {
        if (s->_end->r_drak.left < 5600)
            s->_end->r_drak.left += 800;
        else
            s->_end->r_drak.left = 0;
        sfClock_restart(s->_end->clock);
    }
}

void display_end(s_str *s)
{
    sfSprite_setTextureRect(s->_end->s_end, s->_end->r_end);
    sfRenderWindow_drawSprite(s->_window->window, s->_end->s_end, NULL);
    sfSprite_setTextureRect(s->_char->s_char, s->_char->r_char);
    sfRenderWindow_drawSprite(s->_window->window, s->_char->s_char, NULL);
    sfSprite_setTextureRect(s->_end->s_drak, s->_end->r_drak);
    sfRenderWindow_drawSprite(s->_window->window, s->_end->s_drak, NULL);
    sfSprite_setTextureRect(s->_end->s_end2, s->_end->r_end2);
    sfRenderWindow_drawSprite(s->_window->window, s->_end->s_end2, NULL);
    if (s->_map->A == 1) {
        sfSprite_setTextureRect(s->_map->s_A, s->_map->r_A);
        sfRenderWindow_drawSprite(s->_window->window, s->_map->s_A, NULL);
    }
    display_life(s);
    drawn_item(s);
    move_drak(s);
    text_level(s);
}