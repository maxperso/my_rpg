/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** handle_interaction
*/

#include "../../include/struct.h"

void inter_drake(s_str *s)
{
    if (s->_char->p_char.x > s->_end->p_drak.x - 200 &&
    s->_char->p_char.x < s->_end->p_drak.x + 100) {
        s->_map->A = 1;
        s->_end->fight = 1;
        return;
    }
    s->_map->A = 0;
}

void a_interaction2(s_str *s)
{
    if (s->_item[3].up == 1)
        s->_char->attack = s->_char->base_att + 15 + s->_char->buff_att;
    else if (s->_item[3].up == 0)
        s->_char->attack = s->_char->base_att + s->_char->buff_att;

    inter_drake(s);
}