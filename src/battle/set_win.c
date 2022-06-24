/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** attack
*/

#include "../../include/struct.h"

void set_win_lose(s_str *s)
{
    if (s->_var->last_p2 == 2) {
        s->_end->p_win.x = s->_char->p_char.x - 960;
        s->_end->p_win.y = s->_char->p_char.y - 660;
    } else {
        s->_end->p_win.x = 0;
        s->_end->p_win.y = 0;
    }
    sfSprite_setPosition(s->_end->s_win, s->_end->p_win);
}

void display_win_lose(s_str *s)
{
    if (s->_end->end == 2)
        s->_end->r_win.left = 1920;
    sfSprite_setTextureRect(s->_end->s_win, s->_end->r_win);
    sfRenderWindow_drawSprite(s->_window->window, s->_end->s_win, NULL);
}