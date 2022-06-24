/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** my_rpg
*/

#include "../include/struct.h"

void start_game2(s_str *s)
{
    if (s->_var->page == 3)
        set_htp(s);
    if (s->_var->page == 4)
        set_pause(s);
    if (s->_var->page == 6)
        set_win_lose(s);
    check_win(s);
    display(s);
}

void start_game(s_str *s)
{
    open_window(s);
    while (sfRenderWindow_isOpen(s->_window->window)) {
        s->_window->mouse =
        sfMouse_getPosition((sfWindow *)s->_window->window);
        pool_event(s);
        if (s->_var->page == 0)
            set_menu(s);
        if (s->_var->page == 1 || s->_var->page == 5)
            set_page1(s);
        if ((s->_var->page == 2 || s->_var->page == 5)
        && s->_var->last_p2 == 2)
            set_page2(s);
        start_game2(s);
    }
    sfRenderWindow_destroy(s->_window->window);
}

void usage(void)
{
    my_putstr("Usage: ./my_rpg\n");
}

int main(int ac, char **av)
{
    srand(time(NULL));
    s_str *s = malloc(sizeof(s_str));
    if (ac == 1) {
        init_all(s);
        sfMusic_play(s->_menu->music);
        sfMusic_setVolume(s->_menu->music, s->_menu->volume);
        sfMusic_setLoop(s->_menu->music, sfTrue);
        start_game(s);
        free_struct(s);
    } else if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        usage();
    return (0);
}