/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** colision
*/

#include "../../include/struct.h"

int coli_l(s_str *s)
{
    if (s->_var->screen == 0 && s->_char->p_char.x < 100) {
        return (0);
    }
    if (s->_var->page == 2 && s->_char->p_char.x < 1010) {
        return (0);
    }
    return (1);
}

int coli_r(s_str *s)
{
    if (s->_var->screen == 8 && s->_char->p_char.x > 1300
    && s->_item[6].up == 0)
        return (0);
    if (s->_var->screen == 5 && s->_char->p_char.x > 1800
    && s->_item[2].up == 0)
        return (0);
    if (s->_var->page == 2 && s->_char->p_char.x > 3900)
        return (0);
    return (1);
}