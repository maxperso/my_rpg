/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** my_text
*/

#include "../../include/struct.h"

void change_qte(s_str *s)
{
    int qte = rand() % 50;

    if (qte > 25)
        s->_mob->qte[0] = 'B';
    else
        s->_mob->qte[0] = 'A';
}

void set_pose(s_str *s)
{
    if (s->_var->last_p2 == 2) {
        s->_mob->p_qte.x = s->_char->p_char.x - 300;
        s->_mob->p_qte.y = s->_char->p_char.y - 260;
    } else {
        s->_mob->p_qte.x = 630;
        s->_mob->p_qte.y = 390;
    }
}

void text_qte(s_str *s)
{
    sfText_setString(s->_mob->txt_qte, s->_mob->qte);
    sfText_setFont(s->_mob->txt_qte, s->_mob->font);
    sfText_setCharacterSize(s->_mob->txt_qte, 90);
    sfText_setColor(s->_mob->txt_qte, sfWhite);
    set_pose(s);
    sfText_setPosition(s->_mob->txt_qte, s->_mob->p_qte);
    sfRenderWindow_drawText(s->_window->window, s->_mob->txt_qte, NULL);
}

void set_level(s_str *s)
{
    if (s->_var->last_p2 == 2) {
        s->_map->p_lvl.x = s->_char->p_char.x - 670;
        s->_map->p_lvl.y = s->_char->p_char.y + 320;
    } else {
        s->_map->p_lvl.x = 550;
        s->_map->p_lvl.y = 985;
    }
}

void text_level(s_str *s)
{
    if (s->_char->niv == 1)
        sfText_setString(s->_map->txt_lvl, "lvl: 1");
    if (s->_char->niv == 2)
        sfText_setString(s->_map->txt_lvl, "lvl: 2");
    if (s->_char->niv == 3)
        sfText_setString(s->_map->txt_lvl, "lvl: 3");
    if (s->_char->niv == 4)
        sfText_setString(s->_map->txt_lvl, "lvl: 4");
    if (s->_char->niv == 5)
        sfText_setString(s->_map->txt_lvl, "lvl: 5");
    sfText_setFont(s->_map->txt_lvl, s->_mob->font);
    sfText_setCharacterSize(s->_map->txt_lvl, 70);
    sfText_setColor(s->_map->txt_lvl, sfWhite);
    set_level(s);
    sfText_setPosition(s->_map->txt_lvl, s->_map->p_lvl);
    sfRenderWindow_drawText(s->_window->window, s->_map->txt_lvl, NULL);
}