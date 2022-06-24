/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** mouse_press
*/

#include "../../include/struct.h"

void mousse_2(s_str *s)
{
    if (s->_window->mouse.x > 0 && s->_window->mouse.x < 100
        && s->_window->mouse.y > 0 && s->_window->mouse.y < 100
        && s->_var->page == 3) {
        s->_var->page = 0;
    }
    if (s->_window->mouse.x > 710 && s->_window->mouse.x < 1210
        && s->_window->mouse.y > 635 && s->_window->mouse.y < 725
        && s->_var->page == 4) {
        s->_var->page = s->_var->last_p;
    }
    if (s->_window->mouse.x > 710 && s->_window->mouse.x < 1210
        && s->_window->mouse.y > 820 && s->_window->mouse.y < 900
        && s->_var->page == 4) {
        sfRenderWindow_close(s->_window->window);
    }
}

void mousse_release(s_str *s)
{
    if (s->_window->mouse.x > 710 && s->_window->mouse.x < 1210
        && s->_window->mouse.y > 715 && s->_window->mouse.y < 795
        && s->_var->page == 0) {
        s->_var->page = 1;
        s->_menu->r_sword.left = 0;
    }
    if (s->_window->mouse.x > 710 && s->_window->mouse.x < 1210
        && s->_window->mouse.y > 820 && s->_window->mouse.y < 900
        && s->_var->page == 0) {
        s->_var->page = 3;
        s->_menu->r_sword2.left = 0;
    }
    if (s->_window->mouse.x > 710 && s->_window->mouse.x < 1210
        && s->_window->mouse.y > 925 && s->_window->mouse.y < 1003
        && s->_var->page == 0) {
        sfRenderWindow_close(s->_window->window);
        s->_menu->r_sword3.left = 0;
    }
}

void event_end_mouse(s_str *s)
{
    if (s->_window->mouse.x > 710 && s->_window->mouse.x < 1210
        && s->_window->mouse.y > 925 && s->_window->mouse.y < 1003
        && s->_var->page == 0) {
        s->_menu->r_sword3.left = 40;
        sfSound_play(s->_menu->clic);
    }
    if (s->_window->mouse.x > 710 && s->_window->mouse.x < 1210
        && s->_window->mouse.y > 925 && s->_window->mouse.y < 1003
        && s->_var->page == 6) {
        sfRenderWindow_close(s->_window->window);
    }
}

void event_mousse(s_str *s)
{
    if (s->_window->mouse.x > 710 && s->_window->mouse.x < 1210
        && s->_window->mouse.y > 715 && s->_window->mouse.y < 795
        && s->_var->page == 0) {
        s->_menu->r_sword.left = 40;
        sfSound_play(s->_menu->clic);
    }
    if (s->_window->mouse.x > 710 && s->_window->mouse.x < 1210
        && s->_window->mouse.y > 820 && s->_window->mouse.y < 900
        && s->_var->page == 0) {
        s->_menu->r_sword2.left = 40;
        sfSound_play(s->_menu->clic);
    }
    mousse_2(s);
    mouse_item(s);
    event_end_mouse(s);
}