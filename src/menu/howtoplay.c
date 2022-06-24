/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** howtoplay
*/

#include "../../include/struct.h"

void set_htp(s_str *s)
{
    sfSprite_setPosition(s->_menu->s_htp, s->_menu->p_htp);
}

void display_htp(s_str *s)
{
    sfSprite_setTextureRect(s->_menu->s_htp, s->_menu->r_htp);
    sfRenderWindow_drawSprite(s->_window->window, s->_menu->s_htp, NULL);
}