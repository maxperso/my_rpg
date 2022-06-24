/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** window
*/

#include "../include/struct.h"

void open_window(s_str *s)
{
    sfVideoMode video_mode = {1920, 1080, 32};
    s->_window->window = sfRenderWindow_create(video_mode, "MineRPG",
    sfFullscreen, NULL);
    sfRenderWindow_setFramerateLimit(s->_window->window, 60);
}

void pool_event2(s_str *s)
{
    if (s->_window->event.type == sfEvtKeyPressed
        && (sfKeyboard_isKeyPressed(sfKeyLeft) ||
        sfKeyboard_isKeyPressed(sfKeyRight)) && s->_var->page != 5)
        move_char(s);
    if (s->_window->event.type == sfEvtMouseButtonPressed)
        event_mousse(s);
    if (s->_window->event.type == sfEvtMouseButtonReleased)
        mousse_release(s);
    if (s->_var->page == 5)
        check_attack(s);
}

void pool_event(s_str *s)
{
    while (sfRenderWindow_pollEvent(s->_window->window, &s->_window->event)) {
        if (s->_window->event.type == sfEvtClosed)
            sfRenderWindow_close(s->_window->window);
        if (s->_window->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeyEscape) && s->_var->page != 1
        && s->_var->page != 2 && s->_var->page != 4 && s->_var->page != 5)
            sfRenderWindow_close(s->_window->window);
        if (s->_window->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeyEscape))
            escape_key(s);
        if (s->_window->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeyA) && (s->_var->page == 1 ||
        s->_var->page == 2))
            a_lunch(s);
        pool_event2(s);
    }
}

void display2(s_str *s)
{
    if (s->_var->page == 3)
        display_htp(s);
    if (s->_var->page == 4)
        display_pause(s);
    if (s->_var->page == 6)
        display_win_lose(s);
}

void display(s_str *s)
{
    sfRenderWindow_clear(s->_window->window, sfBlack);
    if (s->_var->page == 0) {
        display_menu(s);
    }
    if (s->_var->page == 1 || s->_var->page == 5) {
        display_map(s);
        display_mob(s);
        display_char(s);
        if (s->_var->page == 5)
            display_battle(s);
    }
    if ((s->_var->page == 2 || s->_var->page == 5) && s->_var->last_p2 == 2) {
        display_end(s);
        if (s->_var->page == 5)
            display_battle(s);
    }
    display2(s);
    sfRenderWindow_display(s->_window->window);
}