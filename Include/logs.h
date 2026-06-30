// ---------------------- //
// Made by abbys - 042    //
// discord @xabbys_       //
// LICENSE GPL 2.0        //
// ---------------------- //
#pragma once 

#include "default.h"
#include "pythonlib.h"
#include "socket.h"
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// ----- ENUM STATUS FOR FILE LOGING -----------//

typedef enum {

    LOG_WARN,
    LOG_FLAG,
    LOG_INFO,
    LOG_ERROR,
    LOG_CRITICAL,
    LOG_CONSTRUCT

}logs_types;


void log_setup(bool is_runing, logs_types* condition);

void print(const char* condition, bool is_error);