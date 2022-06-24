/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** menu
*/

#include "../../include/struct.h"

void set_menu(s_str *s)
{
    sfSprite_setPosition(s->_menu->s_menu, s->_menu->p_menu);
    sfSprite_setPosition(s->_menu->s_sword, s->_menu->p_sword);
    sfSprite_setPosition(s->_menu->s_sword2, s->_menu->p_sword2);
    sfSprite_setPosition(s->_menu->s_sword3, s->_menu->p_sword3);
}

void display_menu(s_str *s)
{
    sfSprite_setTextureRect(s->_menu->s_menu, s->_menu->r_menu);
    sfRenderWindow_drawSprite(s->_window->window, s->_menu->s_menu, NULL);

    if (s->_window->mouse.x > 710 && s->_window->mouse.x < 1210
        && s->_window->mouse.y > 715 && s->_window->mouse.y < 795) {
        sfSprite_setTextureRect(s->_menu->s_sword, s->_menu->r_sword);
        sfRenderWindow_drawSprite(s->_window->window, s->_menu->s_sword, NULL);
    }
    if (s->_window->mouse.x > 710 && s->_window->mouse.x < 1210
        && s->_window->mouse.y > 820 && s->_window->mouse.y < 900) {
        sfSprite_setTextureRect(s->_menu->s_sword2, s->_menu->r_sword2);
        sfRenderWindow_drawSprite(s->_window->window,
        s->_menu->s_sword2, NULL);
    }
    if (s->_window->mouse.x > 710 && s->_window->mouse.x < 1210
        && s->_window->mouse.y > 925 && s->_window->mouse.y < 1003) {
        sfSprite_setTextureRect(s->_menu->s_sword3, s->_menu->r_sword3);
        sfRenderWindow_drawSprite(s->_window->window,
        s->_menu->s_sword3, NULL);
    }
}