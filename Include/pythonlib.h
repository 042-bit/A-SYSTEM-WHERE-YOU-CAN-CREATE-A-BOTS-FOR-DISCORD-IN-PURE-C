// ---------------------- //
// Made by abbys - 042    //
// discord @xabbys_       //
// LICENSE GPL 2.0        //
// ---------------------- //

#pragma once 

#include "default.h"
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// --------BASIC IMPLEMENTATION FILE---------- //

typedef struct {

    b8 file_name[255];
    b8 path_to_env[255];

}basic_t;

// ----- STRUCT FOR READING CONFIG FILE -----------//

typedef struct {

    u32 file_env_hiden_key;
    u32 file_size;
    s32 file_fc_count;
    b8  file_fc_names[255][255];

}file_t;

// ----- RUNTIME CREATE PROCESS WITH ID  -----------//

typedef struct { 

    u32 size;
    s32 id;
    b8 process_name[255];

}create_process_t;

// ----- GLOBAL FUNCTIONS  -----------//

void open_file(basic_t* file);
void create_process(create_process_t* process);