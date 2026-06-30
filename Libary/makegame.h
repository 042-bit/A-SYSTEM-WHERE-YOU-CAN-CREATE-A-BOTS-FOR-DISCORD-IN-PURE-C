// ---------------------- //
// Made by abbys - 042    //
// discord @xabbys_       //
// LICENSE GPL 2.0        //
// ---------------------- //


#pragma once 
#include "../include/default.h"
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct { 

    s32 id;
    u32 w;
    u32 h;
    b8 desc[255];
    b8 name[255];

}make_game_gui; 

typedef struct {

    bool is_error;
    bool c_open;
    bool success;
    bool suspend;

}game_bool;

void gui_Create(make_game_gui* param, game_bool* condition);