/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** escape_key
*/

#include "../../include/struct.h"

void escape_key(s_str *s)
{
    if (s->_var->page == 1 || s->_var->page == 2 ||
    s->_var->page == 4 || s->_var->page == 5) {
        if (s->_var->page == 1 || s->_var->page == 2 || s->_var->page == 5)
            s->_var->last_p = s->_var->page;
        s->_var->page = 4;
    }
}