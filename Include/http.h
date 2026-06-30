// ---------------------- //
// Made by abbys - 042    //
// discord @xabbys_       //
// LICENSE GPL 2.0        //
// ---------------------- //
#pragma once 

#include "logs.h"
#include "default.h"
#include "pythonlib.h"
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


typedef struct {

    char name_server[128];
    char where[255];
    u64 ip;
    u64 size;

}db_header;


typedef struct {

    state_t* state;
    status_expended_t* stateex;
    u64 hand_shake;

}db_body;


typedef struct {

    logs_types* logs;
    s64 key;

}db_bottom;


typedef struct {

    u64 ip;
    u64 hand_shake_ip;
    s64 sha_key;
    char location[255]; // for compliance in EU countries you can turn it off if you not in UE

}bridge;

typedef struct {

    u64 ip;
    u32 port;
    bool port_Open;
    bool is_send_voice;
    bool is_hear;

}localhost;

typedef struct {

    db_header* header;
    db_body* body;
    db_bottom* bottom;
    bool is_request;
}pool;


typedef struct {

    u64 ip;
    u64 sha512;
    u32 port;
    pool* pool;
    char DB_Protocol[16];

}db_protocol;

typedef struct {

    u64 ip;
    bool is_listening;

}hear_voice;

typedef struct {

    u64 ip;
    u64 ip_connect;
    bool request;
    db_protocol* protocol;

}send_voice;


// ---------- GLOBAL FUNCTIONS ----------// 

void create_connect_bridged(bridge* send);
void create_localhost(localhost* host);
void createA_pool(pool* pools);