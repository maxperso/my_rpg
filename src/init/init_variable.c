/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** init_variable
*/

#include "../../include/struct.h"

// zombie : 70pv 20 att -> id 0 1
// creep  : 10pv 200 att -> id 2 3
// pig : 120 pv 35 att -> id 4
// spider : 300 pv 15 att -> id 5
void init_mob(s_str *s)
{
    s->_mob[0].life = 70;
    s->_mob[0].att = 20;
    s->_mob[1].life = 70;
    s->_mob[1].att = 20;
    s->_mob[2].life = 10;
    s->_mob[2].att = 200;
    s->_mob[3].life = 10;
    s->_mob[3].att = 200;
    s->_mob[4].life = 120;
    s->_mob[4].att = 30;
    s->_mob[5].life = 300;
    s->_mob[5].att = 15;
    for (int i = 0; i != 6; i += 1)
        s->_mob[i].mob = 0;
    s->_item->ball_l = 0;
    s->_item->ball_r = 0;
    s->_item->start = 0;
    s->_end->life = 300;
    s->_end->att = 35;
    s->_end->end = 0;
}

void init_variable2(s_str *s)
{
    for (int i = 0; i != 9; i += 1) {
        s->_item[i].up = 0;
    }
    s->_item[5].up = 1;
    s->_map->A = 0;
    s->_char->life = 100;
    s->_char->attack = 50;
    s->_char->buff_att = 0;
    s->_char->base_att = 50;
    init_mob(s);
}

void init_variable(s_str *s)
{
    s->_var->page = 0;
    s->_var->size.x = 2;
    s->_var->size.y = 2;
    s->_var->size2.x = 3;
    s->_var->size2.y = 3;
    s->_char->level = 0;
    s->_char->niv = 1;
    s->_var->second = 0;
    s->_var->last_p = 0;
    s->_char->clock = sfClock_create();
    s->_end->clock = sfClock_create();
    s->_var->screen = 0;
    s->_char->book = 0;
    init_variable2(s);
    init_mob(s);
}