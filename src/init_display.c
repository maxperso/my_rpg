/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** init_display
*/

#include "../include/struct.h"

void set_page1(s_str *s)
{
    a_interaction(s);
    set_map(s);
    set_char(s);
    set_mob(s);
    set_battle(s);
}

void set_page2(s_str *s)
{
    a_interaction2(s);
    set_end(s);
    set_battle(s);
}