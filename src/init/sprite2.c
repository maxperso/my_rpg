/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** sprite
*/

#include "../../include/struct.h"

void sprite_menu2(s_str *s)
{
    s->_menu->t_htp = sfTexture_createFromFile("./sprite/HowToPlay.png", NULL);
    s->_menu->s_htp = sfSprite_create();
    sfSprite_setTexture(s->_menu->s_htp, s->_menu->t_htp, sfTrue);
    s->_menu->t_pause = sfTexture_createFromFile("./sprite/Pause.png", NULL);
    s->_menu->s_pause = sfSprite_create();
    sfSprite_setTexture(s->_menu->s_pause, s->_menu->t_pause, sfTrue);
    s->_item->t_batle = sfTexture_createFromFile("./sprite/battle.png", NULL);
    s->_item->s_batle = sfSprite_create();
    sfSprite_setTexture(s->_item->s_batle, s->_item->t_batle, sfTrue);
    s->_item->t_ball = sfTexture_createFromFile("./sprite/ball.png", NULL);
    s->_item->s_ball = sfSprite_create();
    sfSprite_setTexture(s->_item->s_ball, s->_item->t_ball, sfTrue);
    s->_end->t_win = sfTexture_createFromFile("./sprite/end.png", NULL);
    s->_end->s_win = sfSprite_create();
    sfSprite_setTexture(s->_end->s_win, s->_end->t_win, sfTrue);
}

void init_sprite2(s_str *s)
{
    sprite_menu2(s);
    s->_menu->t_sword = sfTexture_createFromFile("./sprite/sword.png", NULL);
    s->_menu->s_sword = sfSprite_create();
    sfSprite_setTexture(s->_menu->s_sword, s->_menu->t_sword, sfTrue);
    s->_menu->s_sword2 = sfSprite_create();
    sfSprite_setTexture(s->_menu->s_sword2, s->_menu->t_sword, sfTrue);
    s->_menu->s_sword3 = sfSprite_create();
    sfSprite_setTexture(s->_menu->s_sword3, s->_menu->t_sword, sfTrue);
    s->_char->t_book = sfTexture_createFromFile("./sprite/book.png", NULL);
    s->_char->s_book = sfSprite_create();
    sfSprite_setTexture(s->_char->s_book, s->_char->t_book, sfTrue);
    s->_map->t_parti = sfTexture_createFromFile("./sprite/partic.png", NULL);
    s->_map->s_parti = sfSprite_create();
    sfSprite_setTexture(s->_map->s_parti, s->_map->t_parti, sfTrue);
    s->_map->t_shad = sfTexture_createFromFile("./sprite/shad.png", NULL);
    s->_map->s_shad = sfSprite_create();
    sfSprite_setTexture(s->_map->s_shad, s->_map->t_shad, sfTrue);
}