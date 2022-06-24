/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** sprite
*/

#include "../../include/struct.h"

void sprite_menu(s_str *s)
{
    s->_menu->t_menu = sfTexture_createFromFile("./sprite/menu.png", NULL);
    s->_menu->s_menu = sfSprite_create();
    sfSprite_setTexture(s->_menu->s_menu, s->_menu->t_menu, sfTrue);
    s->_char->t_life = sfTexture_createFromFile("./sprite/lifeBar.png", NULL);
    s->_char->s_life = sfSprite_create();
    sfSprite_setTexture(s->_char->s_life, s->_char->t_life, sfTrue);
    s->_end->t_end = sfTexture_createFromFile("./sprite/backend1.png", NULL);
    s->_end->s_end = sfSprite_create();
    sfSprite_setTexture(s->_end->s_end, s->_end->t_end, sfTrue);
    s->_end->t_end2 = sfTexture_createFromFile("./sprite/backend2.png", NULL);
    s->_end->s_end2 = sfSprite_create();
    sfSprite_setTexture(s->_end->s_end2, s->_end->t_end2, sfTrue);

    s->_end->t_drak = sfTexture_createFromFile("./sprite/drake.png", NULL);
    s->_end->s_drak = sfSprite_create();
    sfSprite_setTexture(s->_end->s_drak, s->_end->t_drak, sfTrue);
}

void sprite_game(s_str *s)
{
    s->_map->t_map = sfTexture_createFromFile("./sprite/map.png", NULL);
    s->_map->s_map = sfSprite_create();
    sfSprite_setTexture(s->_map->s_map, s->_map->t_map, sfTrue);
    s->_map->t_map1 = sfTexture_createFromFile("./sprite/map1p.png", NULL);
    s->_map->s_map1 = sfSprite_create();
    sfSprite_setTexture(s->_map->s_map1, s->_map->t_map1, sfTrue);
    s->_map->t_A = sfTexture_createFromFile("./sprite/keyA.png", NULL);
    s->_map->s_A = sfSprite_create();
    sfSprite_setTexture(s->_map->s_A, s->_map->t_A, sfTrue);
    s->_item->t_bar = sfTexture_createFromFile("./sprite/toolBar.png", NULL);
    s->_item->s_bar = sfSprite_create();
    sfSprite_setTexture(s->_item->s_bar, s->_item->t_bar, sfTrue);
    s->_char->t_char = sfTexture_createFromFile("./sprite/vil1.png", NULL);
    s->_char->s_char = sfSprite_create();
    sfSprite_setTexture(s->_char->s_char, s->_char->t_char, sfTrue);
}

void sprite_item(s_str *s)
{
    s->_item[0].t_item = sfTexture_createFromFile("./sprite/item1.png", NULL);
    s->_item[1].t_item = sfTexture_createFromFile("./sprite/item2.png", NULL);
    s->_item[2].t_item = sfTexture_createFromFile("./sprite/item3.png", NULL);
    s->_item[3].t_item = sfTexture_createFromFile("./sprite/item4.png", NULL);
    s->_item[4].t_item = sfTexture_createFromFile("./sprite/item5.png", NULL);
    s->_item[5].t_item = sfTexture_createFromFile("./sprite/item6.png", NULL);
    s->_item[6].t_item = sfTexture_createFromFile("./sprite/item7.png", NULL);
    s->_item[7].t_item = sfTexture_createFromFile("./sprite/item8.png", NULL);
    s->_item[8].t_item = sfTexture_createFromFile("./sprite/item9.png", NULL);
    for (int i = 0; i != 9; i++) {
        s->_item[i].s_item = sfSprite_create();
        sfSprite_setTexture(s->_item[i].s_item, s->_item[i].t_item, sfTrue);
    }
}

void sprite_mob(s_str *s)
{
    s->_mob[0].t_mob = sfTexture_createFromFile("./sprite/mob1.png", NULL);
    s->_mob[1].t_mob = sfTexture_createFromFile("./sprite/mob2.png", NULL);
    s->_mob[2].t_mob = sfTexture_createFromFile("./sprite/mob3.png", NULL);
    s->_mob[3].t_mob = sfTexture_createFromFile("./sprite/mob4.png", NULL);
    s->_mob[0].s_mob = sfSprite_create();
    sfSprite_setTexture(s->_mob[0].s_mob, s->_mob[0].t_mob, sfTrue);
    s->_mob[1].s_mob = sfSprite_create();
    sfSprite_setTexture(s->_mob[1].s_mob, s->_mob[0].t_mob, sfTrue);
    s->_mob[2].s_mob = sfSprite_create();
    sfSprite_setTexture(s->_mob[2].s_mob, s->_mob[1].t_mob, sfTrue);
    s->_mob[3].s_mob = sfSprite_create();
    sfSprite_setTexture(s->_mob[3].s_mob, s->_mob[1].t_mob, sfTrue);
    s->_mob[4].s_mob = sfSprite_create();
    sfSprite_setTexture(s->_mob[4].s_mob, s->_mob[2].t_mob, sfTrue);
    s->_mob[5].s_mob = sfSprite_create();
    sfSprite_setTexture(s->_mob[5].s_mob, s->_mob[3].t_mob, sfTrue);
}

void init_sprite(s_str *s)
{
    sprite_menu(s);
    sprite_game(s);
    sprite_item(s);
    sprite_mob(s);
    init_sprite2(s);
}