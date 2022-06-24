/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** malloc
*/

#include "../../include/struct.h"

void malloc_struct(s_str *s)
{
    s->_window = malloc(sizeof(t_window));
    s->_menu = malloc(sizeof(t_menu));
    s->_var = malloc(sizeof(t_variable));
    s->_map = malloc(sizeof(t_map));
    s->_char = malloc(sizeof(t_char));
    s->_mob = malloc(sizeof(t_mob) * 6);
    s->_item = malloc(sizeof(t_item) * 9);
    s->_end = malloc(sizeof(t_end));
}

void free_struct(s_str *s)
{
    sfClock_destroy(s->_char->clock);
    sfClock_destroy(s->_end->clock);
    sfMusic_destroy(s->_menu->music);
    sfSound_destroy(s->_menu->clic);
    sfSoundBuffer_destroy(s->_menu->bclic);
    sfSound_destroy(s->_menu->villa);
    sfSoundBuffer_destroy(s->_menu->bvilla);
    free(s->_window);
    free(s->_menu);
    free(s->_var);
    free(s->_map);
    free(s->_char);
    free(s->_mob);
    free(s->_item);
    free(s->_end);
    free(s);
}