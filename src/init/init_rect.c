/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** init_pos
*/

#include "../../include/struct.h"

void rect_menu(s_str *s)
{
    s->_menu->r_menu.top = 0;
    s->_menu->r_menu.left = 0;
    s->_menu->r_menu.width = 1920;
    s->_menu->r_menu.height = 1080;
    s->_char->r_life.top = 0;
    s->_char->r_life.left = 0;
    s->_char->r_life.width = 400;
    s->_char->r_life.height = 35;
    s->_end->r_end.top = 0;
    s->_end->r_end.left = 0;
    s->_end->r_end.width = 5000;
    s->_end->r_end.height = 1080;
    s->_end->r_end2.top = 0;
    s->_end->r_end2.left = 0;
    s->_end->r_end2.width = 5000;
    s->_end->r_end2.height = 1080;
}

void rect_map(s_str *s)
{
    s->_map->r_map.top = 0;
    s->_map->r_map.left = 0;
    s->_map->r_map.width = 960;
    s->_map->r_map.height = 540;
    s->_map->r_map1.top = 0;
    s->_map->r_map1.left = 0;
    s->_map->r_map1.width = 960;
    s->_map->r_map1.height = 540;
    s->_map->r_A.top = 0;
    s->_map->r_A.left = 0;
    s->_map->r_A.width = 80;
    s->_map->r_A.height = 80;
    s->_item->r_bar.top = 0;
    s->_item->r_bar.left = 0;
    s->_item->r_bar.width = 413;
    s->_item->r_bar.height = 75;
}

void rect_char(s_str *s)
{
    s->_char->r_char.top = 0;
    s->_char->r_char.left = 440;
    s->_char->r_char.width = 110;
    s->_char->r_char.height = 190;
    for (int i = 0; i != 6; i += 1) {
        s->_mob[i].r_mob.top = 0;
        s->_mob[i].r_mob.left = 0;
        s->_mob[i].r_mob.width = 157;
        s->_mob[i].r_mob.height = 157;
    }
    for (int i = 0; i != 9; i += 1) {
        s->_item[i].r_item.top = 0;
        s->_item[i].r_item.left = 0;
        s->_item[i].r_item.width = 42;
        s->_item[i].r_item.height = 42;
    }
}

void rect_other(s_str *s)
{
    s->_end->rect_cam.top = 0;
    s->_end->rect_cam.left = 0;
    s->_end->rect_cam.width = 1920;
    s->_end->rect_cam.height = 1080;
    s->_end->camera = sfView_createFromRect(s->_end->rect_cam);
    s->_end->r_drak.top = 0;
    s->_end->r_drak.left = 0;
    s->_end->r_drak.width = 800;
    s->_end->r_drak.height = 400;
    s->_menu->r_htp.top = 0;
    s->_menu->r_htp.left = 0;
    s->_menu->r_htp.width = 1920;
    s->_menu->r_htp.height = 1080;
    s->_char->r_book.top = 0;
    s->_char->r_book.left = 0;
    s->_char->r_book.width = 1000;
    s->_char->r_book.height = 666;
}

void init_rect(s_str *s)
{
    rect_menu(s);
    rect_map(s);
    rect_char(s);
    rect_other(s);
    init_rect2(s);
    s->_map->r_parti.top = 0;
    s->_map->r_parti.left = 0;
    s->_map->r_parti.width = 1920;
    s->_map->r_parti.height = 1080;
}