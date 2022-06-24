/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** attack
*/

#include "../../include/struct.h"

void attack_end(s_str *s)
{
    if (s->_item->p_ball.x > s->_char->p_char.x - 355 &&
    s->_item->p_ball.x < s->_char->p_char.x - 255) {
        if (s->_window->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeyA) &&
        s->_mob->qte[0] == 'A') {
            s->_end->life -= s->_char->attack;
        }
        if (s->_window->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeyB) &&
        s->_mob->qte[0] == 'B') {
            s->_end->life -= s->_char->attack;
        }
    }
}

void attack_normal(s_str *s)
{
    int mob = 0;

    for (int i = 0; i != 6; i += 1) {
        if (s->_mob[i].mob == 1)
            mob = i;
    }
    if (s->_item->p_ball.x > 600 && s->_item->p_ball.x < 700) {
        if (s->_window->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeyA) &&
        s->_mob->qte[0] == 'A') {
            s->_mob[mob].life -= s->_char->attack;
        }
        if (s->_window->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeyB) &&
        s->_mob->qte[0] == 'B') {
            s->_mob[mob].life -= s->_char->attack;
        }
    }
}

void check_attack(s_str *s)
{
    if (s->_var->last_p2 == 2) {
        attack_end(s);
    } else {
        attack_normal(s);
    }
}
