/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** init_pos
*/

#include "../../include/struct.h"

void set_battle(s_str *s)
{
    if (s->_var->last_p2 == 2) {
        s->_item->p_batle.x = s->_char->p_char.x - 400;
        s->_item->p_batle.y = s->_char->p_char.y - 250;
        if (s->_item->start == 0)
            s->_item->p_ball.x = s->_char->p_char.x + 390;
        s->_item->p_ball.y = s->_char->p_char.y - 155;
        s->_item->ball_l = s->_char->p_char.x - 400;
        s->_item->ball_r = s->_char->p_char.x + 390;
    } else {
        s->_item->p_batle.x = 550;
        s->_item->p_batle.y = 400;
        if (s->_item->start == 0)
            s->_item->p_ball.x = 1350;
        s->_item->p_ball.y = 495;
        s->_item->ball_l = 550;
        s->_item->ball_r = 1350;
    }
    sfSprite_setPosition(s->_item->s_batle, s->_item->p_batle);
    sfSprite_setPosition(s->_item->s_ball, s->_item->p_ball);
    sfSprite_setScale(s->_item->s_ball, s->_var->size2);
}

void ball_move(s_str *s)
{
    s->_item->start = 1;
    if (s->_item->p_ball.x > s->_item->ball_l) {
        s->_var->time = sfClock_getElapsedTime(s->_char->clock);
        s->_var->second = s->_var->time.microseconds / 1000000.0;
        if (s->_var->second > 0.01) {
            s->_item->p_ball.x -= 8;
            sfClock_restart(s->_char->clock);
        }
    } else {
        s->_item->p_ball.x = s->_item->ball_r;
        change_qte(s);
        deal_damage(s);
    }
}

void drake_battle(s_str *s)
{
    if (s->_end->life <= 0) {
        s->_end->end = 1;
    }
}

void display_battle(s_str *s)
{
    handle_battle(s);
    drake_battle(s);
    sfSprite_setTextureRect(s->_item->s_batle, s->_item->r_batle);
    sfRenderWindow_drawSprite(s->_window->window, s->_item->s_batle, NULL);
    ball_move(s);
    sfSprite_setTextureRect(s->_item->s_ball, s->_item->r_ball);
    sfRenderWindow_drawSprite(s->_window->window, s->_item->s_ball, NULL);
    text_qte(s);
}