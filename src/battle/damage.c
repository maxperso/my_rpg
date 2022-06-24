/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** attack
*/

#include "../../include/struct.h"

void deal_damage(s_str *s)
{
    sfSound_play(s->_menu->villa);
    if (s->_mob[0].mob == 1 || s->_mob[1].mob == 1)
        s->_char->life -= s->_mob[0].att;
    if (s->_mob[2].mob == 1 || s->_mob[3].mob == 1)
        s->_char->life -= s->_mob[2].att;
    if (s->_mob[4].mob == 1)
        s->_char->life -= s->_mob[4].att;
    if (s->_mob[5].mob == 1)
        s->_char->life -= s->_mob[5].att;
    if (s->_end->fight == 1)
        s->_char->life -= s->_end->att;
}