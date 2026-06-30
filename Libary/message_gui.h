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

    u64 uuid;
    b8 name[64];
    b8 message[512];

}message;


typedef struct {

    bool is_send;
    bool is_not_send;
    bool suspended;
    bool error;

}bool_messages;

