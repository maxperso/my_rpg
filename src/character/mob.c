/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** char
*/

#include "../../include/struct.h"

void set_mob(s_str *s)
{
    for (int i = 0; i != 6; i += 1) {
        sfSprite_setPosition(s->_mob[i].s_mob, s->_mob[i].p_mob);
    }
}

void display_mob2(s_str *s)
{
    if (s->_var->screen == 5) {
        sfSprite_setTextureRect(s->_mob[4].s_mob, s->_mob[4].r_mob);
        sfRenderWindow_drawSprite(s->_window->window, s->_mob[4].s_mob, NULL);
    }
    if (s->_var->screen == 6) {
        sfSprite_setTextureRect(s->_mob[3].s_mob, s->_mob[3].r_mob);
        sfRenderWindow_drawSprite(s->_window->window, s->_mob[3].s_mob, NULL);
    }
    if (s->_var->screen == 7) {
        sfSprite_setTextureRect(s->_mob[5].s_mob, s->_mob[5].r_mob);
        sfRenderWindow_drawSprite(s->_window->window, s->_mob[5].s_mob, NULL);
    }
}

void display_mob(s_str *s)
{
    if (s->_var->screen == 1) {
        sfSprite_setTextureRect(s->_mob[0].s_mob, s->_mob[0].r_mob);
        sfRenderWindow_drawSprite(s->_window->window, s->_mob[0].s_mob, NULL);
    }
    if (s->_var->screen == 2) {
        sfSprite_setTextureRect(s->_mob[2].s_mob, s->_mob[2].r_mob);
        sfRenderWindow_drawSprite(s->_window->window, s->_mob[2].s_mob, NULL);
    }
    if (s->_var->screen == 3) {
        sfSprite_setTextureRect(s->_mob[1].s_mob, s->_mob[1].r_mob);
        sfRenderWindow_drawSprite(s->_window->window, s->_mob[1].s_mob, NULL);
    }
    display_mob2(s);
}