/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** win
*/

#include "../../include/struct.h"

void check_niv(s_str *s)
{
    if (s->_char->niv == 2)
        s->_char->base_att = 60;
    if (s->_char->niv == 3)
        s->_char->base_att = 80;
    if (s->_char->niv == 4)
        s->_char->base_att = 90;
    if (s->_char->niv == 5)
        s->_char->base_att = 100;
}

void check_win(s_str *s)
{
    if (s->_char->life <= 0) {
        if (s->_item[1].up == 1) {
            s->_item[1].up = 0;
            s->_char->life = 100;
        } else
            s->_end->end = 2;
    }
    if (s->_end->end == 1 || s->_end->end == 2) {
        s->_var->page = 6;
    }
    if (s->_char->level >= 100 && s->_char->niv < 5) {
        s->_char->level = 0;
        s->_char->niv += 1;
    }
    check_niv(s);
}