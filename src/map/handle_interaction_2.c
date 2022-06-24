/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** handle_interaction_2
*/

#include "../../include/struct.h"

void inter_screen_5(s_str *s)
{
    if (s->_char->p_char.x > 780 && s->_char->p_char.x < 960
    && s->_var->screen == 5) {
        s->_map->A = 1;
        for (int i = 0; i != 6; i += 1)
            s->_mob[i].mob = 0;
        s->_mob[4].mob = 1;
        return;
    }
    inter_screen_6(s);
}

void inter_screen_6(s_str *s)
{
    if (s->_char->p_char.x > 850 && s->_char->p_char.x < 1020
    && s->_var->screen == 6) {
        s->_map->A = 1;
        for (int i = 0; i != 6; i += 1)
            s->_mob[i].mob = 0;
        s->_mob[3].mob = 1;
        return;
    }
    inter_screen_7(s);
}

void inter_screen_7(s_str *s)
{
    if (s->_char->p_char.x > 870 && s->_char->p_char.x < 1050
    && s->_var->screen == 7) {
        s->_map->A = 1;
        for (int i = 0; i != 6; i += 1)
            s->_mob[i].mob = 0;
        s->_mob[5].mob = 1;
        return;
    }
    s->_map->A = 0;
}