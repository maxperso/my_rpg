/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** handle_battle
*/

#include "../../include/struct.h"

void zombie(s_str *s)
{
    if (s->_mob[0].life <= 0 || s->_mob[1].life <= 0) {
        s->_mob[0].life = 70;
        s->_mob[1].life = 70;
        if (s->_mob[0].mob == 1 && s->_item[3].up == 0)
            s->_item[3].up = 1;
        if (s->_mob[1].mob == 1 && s->_item[0].up == 0)
            s->_item[0].up = 1;
        s->_var->page = s->_var->last_p2;
        if (s->_var->last_p2 == 2)
            s->_item->p_ball.x = s->_char->p_char.x + 390;
        else
            s->_item->p_ball.x = 1350;
        s->_char->level += 30;
    }
}

void creep(s_str *s)
{
    if (s->_mob[2].life <= 0 || s->_mob[3].life <= 0) {
        s->_mob[2].life = 10;
        s->_mob[3].life = 10;
        if (s->_mob[2].mob == 1 && s->_item[8].up == 0)
            s->_item[8].up = 1;
        if (s->_mob[3].mob == 1 && s->_item[1].up == 0)
            s->_item[1].up = 1;
        s->_var->page = s->_var->last_p2;
        if (s->_var->last_p2 == 2)
            s->_item->p_ball.x = s->_char->p_char.x + 390;
        else
            s->_item->p_ball.x = 1350;
        s->_char->level += 40;
    }
}

void pigman(s_str *s)
{
    if (s->_mob[4].life <= 0) {
        s->_mob[4].life = 300;
        if (s->_item[4].up == 0)
            s->_item[4].up = 1;
        if (s->_item[2].up == 0)
            s->_item[2].up = 1;
        s->_var->page = s->_var->last_p2;
        if (s->_var->last_p2 == 2)
            s->_item->p_ball.x = s->_char->p_char.x + 390;
        else
            s->_item->p_ball.x = 1350;
        s->_char->level += 50;
    }
}

void spider(s_str *s)
{
    if (s->_mob[5].life <= 0) {
        s->_mob[5].life = 300;
        if (s->_item[7].up == 0)
            s->_item[7].up = 1;
        if (s->_item[6].up == 0)
            s->_item[6].up = 1;
        s->_var->page = s->_var->last_p2;
        if (s->_var->last_p2 == 2)
            s->_item->p_ball.x = s->_char->p_char.x + 390;
        else
            s->_item->p_ball.x = 1350;
        s->_char->level += 45;
    }
}

void handle_battle(s_str *s)
{
    if (s->_mob[0].mob == 1 || s->_mob[1].mob == 1)
        zombie(s);
    if (s->_mob[2].mob == 1 || s->_mob[3].mob == 1)
        creep(s);
    if (s->_mob[4].mob == 1)
        pigman(s);
    if (s->_mob[5].mob == 1)
        spider(s);
}