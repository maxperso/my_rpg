/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** handle_interaction
*/

#include "../../include/struct.h"

void inter_screen_4(s_str *s)
{
    inter_screen_5(s);
}

void inter_screen_3(s_str *s)
{
    if (s->_char->p_char.x > 820 && s->_char->p_char.x < 980
    && s->_var->screen == 3) {
        s->_map->A = 1;
        for (int i = 0; i != 6; i += 1)
            s->_mob[i].mob = 0;
        s->_mob[1].mob = 1;
        return;
    }
    inter_screen_4(s);
}

void inter_screen_2(s_str *s)
{
    if (s->_char->p_char.x > 920 && s->_char->p_char.x < 1080
    && s->_var->screen == 2) {
        s->_map->A = 1;
        for (int i = 0; i != 6; i += 1)
            s->_mob[i].mob = 0;
        s->_mob[2].mob = 1;
        return;
    }
    inter_screen_3(s);
}

void inter_screen_1(s_str *s)
{
    if (s->_char->p_char.x > 580 && s->_char->p_char.x < 790
    && s->_var->screen == 1) {
        s->_map->A = 1;
        for (int i = 0; i != 6; i += 1)
            s->_mob[i].mob = 0;
        s->_mob[0].mob = 1;
        return;
    }
    inter_screen_2(s);
}

void a_interaction(s_str *s)
{
    if (s->_item[3].up == 1)
        s->_char->attack = s->_char->base_att + 15 + s->_char->buff_att;
    else if (s->_item[3].up == 0)
        s->_char->attack = s->_char->base_att + s->_char->buff_att;

    inter_screen_1(s);
}