/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** init_pos
*/

#include "../../include/struct.h"

void a_lunch(s_str *s)
{
    if (s->_map->A == 1) {
        s->_var->last_s = s->_var->screen;
        s->_var->last_p2 = s->_var->page;
        s->_var->page = 5;
    }
}