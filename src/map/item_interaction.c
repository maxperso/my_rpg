/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** item_interaction
*/

#include "../../include/struct.h"

void boost_use(s_str *s, int i)
{
    if (s->_item[i].up == 0)
        return;
    switch (i) {
    case 0:
        s->_char->life += 20;
        s->_item[i].up = 0;
        break;
    case 4:
        s->_char->buff_att += 10;
        s->_item[i].up = 0;
        break;
    case 7:
        s->_char->life += 30;
        s->_item[i].up = 0;
        break;
    case 8:
        s->_char->life += 10;
        s->_item[i].up = 0;
        break;
    }
}

void check_book(s_str *s, int i)
{
    if (i == 5 && s->_char->book == 0) {
        s->_char->book = 1;
    } else if (i == 5 && s->_char->book == 1) {
        s->_char->book = 0;
    }
}

void mouse_item(s_str *s)
{
    for (int i = 0; i != 9; i += 1) {
        if (s->_window->mouse.x > s->_item[i].p_item.x &&
        s->_window->mouse.x < s->_item[i].p_item.x + 40 &&
        s->_window->mouse.y > s->_item[i].p_item.y &&
        s->_window->mouse.y < s->_item[i].p_item.y + 40) {
            boost_use(s, i);
            check_book(s, i);
        }
    }
}