/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** init_pos
*/

#include "../../include/struct.h"

void rect_menu2(s_str *s)
{
    s->_menu->r_pause.top = 0;
    s->_menu->r_pause.left = 0;
    s->_menu->r_pause.width = 1920;
    s->_menu->r_pause.height = 1080;
    s->_item->r_batle.top = 0;
    s->_item->r_batle.left = 0;
    s->_item->r_batle.width = 850;
    s->_item->r_batle.height = 250;
    s->_item->r_ball.top = 0;
    s->_item->r_ball.left = 0;
    s->_item->r_ball.width = 15;
    s->_item->r_ball.height = 15;
    s->_end->r_win.top = 0;
    s->_end->r_win.left = 0;
    s->_end->r_win.width = 1920;
    s->_end->r_win.height = 1080;
}

void rect_menu3(s_str *s)
{
    s->_menu->r_sword.top = 0;
    s->_menu->r_sword.left = 0;
    s->_menu->r_sword.width = 40;
    s->_menu->r_sword.height = 40;
    s->_menu->r_sword2.top = 0;
    s->_menu->r_sword2.left = 0;
    s->_menu->r_sword2.width = 40;
    s->_menu->r_sword2.height = 40;
    s->_menu->r_sword3.top = 0;
    s->_menu->r_sword3.left = 0;
    s->_menu->r_sword3.width = 40;
    s->_menu->r_sword3.height = 40;
    s->_map->r_shad.top = 0;
    s->_map->r_shad.left = 0;
    s->_map->r_shad.width = 4000;
    s->_map->r_shad.height = 1080;
}

void init_rect2(s_str *s)
{
    rect_menu2(s);
    rect_menu3(s);
}