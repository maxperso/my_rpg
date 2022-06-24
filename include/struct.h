/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** struct
*/

#ifndef STRUCT_H_
    #define STRUCT_H_

    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #include <SFML/System.h>
    #include <SFML/Window.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <time.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>

typedef struct s_window {
    sfRenderWindow *window;
    sfEvent event;
    sfVector2i mouse;
} t_window;

typedef struct s_menu {
    sfTexture *t_menu;
    sfSprite *s_menu;
    sfIntRect r_menu;
    sfVector2f p_menu;

    sfTexture *t_htp;
    sfSprite *s_htp;
    sfIntRect r_htp;
    sfVector2f p_htp;

    sfTexture *t_pause;
    sfSprite *s_pause;
    sfIntRect r_pause;
    sfVector2f p_pause;

    sfTexture *t_sword;
    sfSprite *s_sword;
    sfIntRect r_sword;
    sfVector2f p_sword;

    sfSprite *s_sword2;
    sfIntRect r_sword2;
    sfVector2f p_sword2;

    sfSprite *s_sword3;
    sfIntRect r_sword3;
    sfVector2f p_sword3;

    sfMusic *music;
    float volume;

    sfSound *clic;
    sfSoundBuffer *bclic;

    sfSound *villa;
    sfSoundBuffer *bvilla;
} t_menu;

typedef struct s_variable {
    size_t page;
    sfVector2f size;
    sfVector2f size2;
    sfTime time;
    float second;
    int screen;
    size_t last_p;
    size_t last_p2;
    size_t last_s;
} t_variable;

typedef struct s_map {
    sfTexture *t_map;
    sfSprite *s_map;
    sfIntRect r_map;
    sfVector2f p_map;

    sfTexture *t_map1;
    sfSprite *s_map1;
    sfIntRect r_map1;
    sfVector2f p_map1;

    sfTexture *t_parti;
    sfSprite *s_parti;
    sfIntRect r_parti;
    sfVector2f p_parti;

    sfTexture *t_shad;
    sfSprite *s_shad;
    sfIntRect r_shad;
    sfVector2f p_shad;

    sfTexture *t_A;
    sfSprite *s_A;
    sfIntRect r_A;
    sfVector2f p_A;
    int A;

    sfText *txt_lvl;
    sfVector2f p_lvl;
} t_map;

typedef struct s_char {
    sfTexture *t_char;
    sfSprite *s_char;
    sfIntRect r_char;
    sfVector2f p_char;
    sfClock *clock;

    sfTexture *t_life;
    sfSprite *s_life;
    sfIntRect r_life;
    sfVector2f p_life;
    int life;
    int attack;
    int buff_att;
    int base_att;
    size_t level;
    size_t niv;
    int book;

    sfTexture *t_book;
    sfSprite *s_book;
    sfIntRect r_book;
    sfVector2f p_book;
} t_char;

typedef struct s_mob {
    sfTexture *t_mob;
    sfSprite *s_mob;
    sfIntRect r_mob;
    sfVector2f p_mob;
    int life;
    int att;
    int mob;
    sfFont *font;

    sfText *txt_qte;
    sfVector2f pose_life;
    sfVector2f p_qte;
    char *qte;
} t_mob;

typedef struct s_item {
    sfTexture *t_item;
    sfSprite *s_item;
    sfIntRect r_item;
    sfVector2f p_item;
    int up;

    sfTexture *t_bar;
    sfSprite *s_bar;
    sfIntRect r_bar;
    sfVector2f p_bar;

    sfTexture *t_batle;
    sfSprite *s_batle;
    sfIntRect r_batle;
    sfVector2f p_batle;

    sfTexture *t_ball;
    sfSprite *s_ball;
    sfIntRect r_ball;
    sfVector2f p_ball;
    int ball_l;
    int ball_r;
    int start;
} t_item;

typedef struct s_end {
    sfTexture *t_end;
    sfSprite *s_end;
    sfIntRect r_end;
    sfVector2f p_end;

    sfTexture *t_drak;
    sfSprite *s_drak;
    sfIntRect r_drak;
    sfVector2f p_drak;

    sfTexture *t_end2;
    sfSprite *s_end2;
    sfIntRect r_end2;
    sfVector2f p_end2;

    sfFloatRect rect_cam;
    sfView *camera;
    sfVector2f pos_cam;
    sfClock *clock;

    sfTexture *t_win;
    sfSprite *s_win;
    sfIntRect r_win;
    sfVector2f p_win;
    int end;
    int att;
    int life;
    int fight;
} t_end;

typedef struct s_struct {
    t_window *_window;
    t_menu *_menu;
    t_variable *_var;
    t_map *_map;
    t_char *_char;
    t_mob *_mob;
    t_item *_item;
    t_end *_end;
} s_str;

void init_all(s_str *s);
void init_sprite(s_str *s);
void malloc_struct(s_str *s);
void init_rect(s_str *s);
void init_pos(s_str *s);
void init_variable(s_str *s);
void free_struct(s_str *s);
void a_lunch(s_str *s);
void a_interaction2(s_str *s);
void deal_damage(s_str *s);

void init_rect2(s_str *s);
void set_menu(s_str *s);
void display_menu(s_str *s);
void set_battle(s_str *s);
void display_battle(s_str *s);
void handle_battle(s_str *s);
void check_attack(s_str *s);
void check_win(s_str *s);
void set_win_lose(s_str *s);

void open_window(s_str *s);
void pool_event(s_str *s);
void display(s_str *s);
void event_mousse(s_str *s);

void display_map(s_str *s);
void set_map(s_str *s);
void display_win_lose(s_str *s);
void set_win_lose(s_str *s);
void move_char(s_str *s);
int coli_r(s_str *s);
int coli_l(s_str *s);
void mousse_release(s_str *s);
void text_level(s_str *s);

void set_page1(s_str *s);
void display_char(s_str *s);
void set_char(s_str *s);
int my_putstr(char *str);

void display_mob(s_str *s);
void set_mob(s_str *s);
void a_interaction(s_str *s);
void mouse_item(s_str *s);
void inter_screen_5(s_str *s);
void inter_screen_6(s_str *s);
void inter_screen_7(s_str *s);
void display_life(s_str *s);
void drawn_item(s_str *s);
void text_qte(s_str *s);
void change_qte(s_str *s);

void display_end(s_str *s);
void set_end(s_str *s);
void init_sprite2(s_str *s);
void display_htp(s_str *s);
void set_htp(s_str *s);
void display_pause(s_str *s);
void set_pause(s_str *s);
void escape_key(s_str *s);
void set_page2(s_str *s);

void drawn_item(s_str *s);
void display_life(s_str *s);

#endif /* !STRUCT_H_ */
