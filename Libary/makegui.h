// ---------------------- //
// Made by abbys - 042    //
// discord @xabbys_       //
// LICENSE GPL 2.0        //
// ---------------------- //

#pragma once 
#include "../include/default.h"
#include "message_gui.h"
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {

    s32 id;
    u32 w;
    u32 h;
    b8 desc[128];
    b8 name[64];

}gui_t;


typedef struct {

    bool is_error;
    bool c_open;
    bool success;
    bool suspend;

}gui_bool;


typedef struct {

    s32 id;
    u32 w;
    u32 h;
    message* message;
    bool_messages* condition;

}message_gui;

// global //

void gui_Create(gui_t* param, gui_bool* condition);
void create_message_gui(message_gui* param);