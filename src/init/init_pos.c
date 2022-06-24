/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** init_pos
*/

#include "../../include/struct.h"

void pose_menu(s_str *s)
{
    s->_menu->p_menu.x = 0;
    s->_menu->p_menu.y = 0;
    s->_menu->p_pause.x = 0;
    s->_menu->p_pause.y = 0;
    s->_menu->p_htp.x = 0;
    s->_menu->p_htp.y = 0;
    s->_char->p_life.x = 1300;
    s->_char->p_life.y = 1020;
    s->_end->p_end.x = 0;
    s->_end->p_end.y = 0;
    s->_end->p_end2.x = 0;
    s->_end->p_end2.y = 0;
    s->_end->p_drak.x = 2160;
    s->_end->p_drak.y = 130;
    s->_mob->p_qte.x = 0;
    s->_mob->p_qte.y = 0;
    s->_end->p_win.x = 0;
    s->_end->p_win.y = 0;
}

void pose_map(s_str *s)
{
    s->_map->p_map.x = 0;
    s->_map->p_map.y = 0;
    s->_map->p_map1.x = 0;
    s->_map->p_map1.y = 0;
    s->_char->p_char.x = 110;
    s->_char->p_char.y = 801;
    s->_map->p_A.x = 300;
    s->_map->p_A.y = 995;
    s->_item->p_bar.x = 750;
    s->_item->p_bar.y = 999;
    int x = 766;
    for (int i = 0; i != 9; i += 1) {
        s->_item[i].p_item.x = x;
        s->_item[i].p_item.y = 1015;
        x += 42;
    }
    s->_item->p_batle.x = 1000;
    s->_item->p_batle.y = 400;
    s->_item->p_ball.x = 0;
    s->_item->p_ball.y = 0;
}

void pose_mob(s_str *s)
{
    s->_mob[0].p_mob.x = 670;
    s->_mob[0].p_mob.y = 832;
    s->_mob[1].p_mob.x = 930;
    s->_mob[1].p_mob.y = 832;
    s->_mob[2].p_mob.x = 1050;
    s->_mob[2].p_mob.y = 837;
    s->_mob[3].p_mob.x = 1000;
    s->_mob[3].p_mob.y = 837;
    s->_mob[4].p_mob.x = 900;
    s->_mob[4].p_mob.y = 832;
    s->_mob[5].p_mob.x = 1050;
    s->_mob[5].p_mob.y = 832;
}

void init_pos(s_str *s)
{
    s->_menu->p_sword.x = 630;
    s->_menu->p_sword.y = 735;
    s->_menu->p_sword2.x = 630;
    s->_menu->p_sword2.y = 845;
    s->_menu->p_sword3.x = 630;
    s->_menu->p_sword3.y = 955;
    s->_char->p_book.x = 470;
    s->_char->p_book.y = 300;
    s->_map->p_parti.x = 0;
    s->_map->p_parti.y = 0;
    s->_map->p_shad.x = 0;
    s->_map->p_shad.y = 0;
    pose_menu(s);
    pose_map(s);
    pose_mob(s);
}