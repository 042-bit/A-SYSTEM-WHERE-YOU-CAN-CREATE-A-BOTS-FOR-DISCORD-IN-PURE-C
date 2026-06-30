// ---------------------- //
// Made by abbys - 042    //
// discord @xabbys_       //
// LICENSE GPL 2.0        //
// ---------------------- //

#include "default.h"
#include "pythonlib.h"
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// ----- ENUM STATUS FOR FILE -----------//

typedef enum {

    STATUS_ORDER,
    STATUS_OPEN,
    STATUS_ALIVE,
    STATUS_STOPED,
    STATUS_KILLED,
    STATUS_RIP

}state_t;

// ----- ENUM STATUS FOR CONNECT -----------//

typedef enum {

    STATUS_DISCORD_CLOSE_POOL,
    STATUS_WARN,
    STATUS_ERROR,
    STATUS_INFO,
    STATUS_NOT_RESPOND,
    STATUS_SUCCESS

}status_expended_t;


// ----- FUNCTIONS FOR C GLOBAL -----------//

void create_connect(bool connected, state_t* state);
void handle_socket(bool connected_socket, status_expended_t* expstat);
void send_body(file_t* key, basic_t* filename, bool heart_beat, state_t* state);
