/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** move_char
*/

#include "../../include/struct.h"

void move_right(s_str *s)
{
    s->_var->time = sfClock_getElapsedTime(s->_char->clock);
    s->_var->second = s->_var->time.microseconds / 1000000.0;
    if (s->_var->second > 0.1) {
        s->_char->p_char.x += 40;
        if (s->_char->r_char.left < 550 &&
        s->_char->r_char.left > 330)
            s->_char->r_char.left += 110;
        else
            s->_char->r_char.left = 440;
        sfClock_restart(s->_char->clock);
    }
}

void move_left(s_str *s)
{
    s->_var->time = sfClock_getElapsedTime(s->_char->clock);
    s->_var->second = s->_var->time.microseconds / 1000000.0;
    if (s->_var->second > 0.1) {
        s->_char->p_char.x -= 40;
        if (s->_char->r_char.left < 220 &&
        s->_char->r_char.left > 0)
            s->_char->r_char.left += 110;
        else
            s->_char->r_char.left = 110;
        sfClock_restart(s->_char->clock);
    }
}

void change_screen(s_str *s)
{
    if (s->_char->p_char.x > 1900 && s->_var->page == 1) {
        s->_char->p_char.x = 50;
        s->_map->r_map.left += 960;
        s->_map->r_map1.left += 960;
        s->_var->screen += 1;
    }
    if (s->_char->p_char.x > 1350 && s->_var->screen == 8
    && s->_var->page == 1) {
        s->_char->p_char.x = 1500;
        s->_char->p_char.y = 658;
        s->_var->page = 2;
        s->_var->last_p2 = 2;
    }
    if (s->_char->p_char.x < 5 && s->_var->page == 1) {
        s->_char->p_char.x = 1900;
        s->_map->r_map.left -= 960;
        s->_map->r_map1.left -= 960;
        s->_var->screen -= 1;
    }
}

void move_char(s_str *s)
{
    if (sfKeyboard_isKeyPressed(sfKeyRight) && coli_r(s) == 1)
        move_right(s);
    if (sfKeyboard_isKeyPressed(sfKeyLeft) && coli_l(s) == 1)
        move_left(s);
    change_screen(s);
}