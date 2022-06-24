/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** init_all
*/

#include "../../include/struct.h"

void init_text(s_str *s)
{
    s->_mob->font = sfFont_createFromFile("./sprite/font.ttf");
    s->_mob->txt_qte = sfText_create();
    s->_mob->qte = malloc(sizeof(char) * 10);
    s->_mob->qte[0] = 'A';
    s->_mob->qte[1] = '\0';

    s->_map->txt_lvl = sfText_create();
}

void my_music(s_str *s)
{
    s->_menu->music = sfMusic_createFromFile("./song/music.ogg");

    s->_menu->clic = sfSound_create();
    s->_menu->bclic = sfSoundBuffer_createFromFile("./song/clic.ogg");
    sfSound_setBuffer(s->_menu->clic, s->_menu->bclic);

    s->_menu->villa = sfSound_create();
    s->_menu->bvilla = sfSoundBuffer_createFromFile("./song/villa.ogg");
    sfSound_setBuffer(s->_menu->villa, s->_menu->bvilla);
    s->_menu->volume = 30;
}

void init_all(s_str *s)
{
    malloc_struct(s);
    init_sprite(s);
    init_rect(s);
    init_pos(s);
    init_variable(s);
    init_text(s);
    my_music(s);
}