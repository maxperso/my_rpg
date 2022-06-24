/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** menu
*/

#include "../../include/struct.h"

void set_pause(s_str *s)
{
    if (s->_var->last_p2 == 2) {
        s->_menu->p_pause.x = s->_char->p_char.x - 960;
        s->_menu->p_pause.y = s->_char->p_char.y - 660;
    } else {
        s->_menu->p_pause.x = 0;
        s->_menu->p_pause.y = 0;
    }
    sfSprite_setPosition(s->_menu->s_pause, s->_menu->p_pause);
}

void display_pause(s_str *s)
{
    sfSprite_setTextureRect(s->_menu->s_pause, s->_menu->r_pause);
    sfRenderWindow_drawSprite(s->_window->window, s->_menu->s_pause, NULL);
}