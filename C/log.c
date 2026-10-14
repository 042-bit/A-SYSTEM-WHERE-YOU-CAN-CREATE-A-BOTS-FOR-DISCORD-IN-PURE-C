#include "../Include/logs.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>

char error_message[2048]; // table for message limit 2048 
static void Error_msg(const char* conditions, bool is_error);

static void PMessage(logs_types condition, char msg[255]) {

    if(condition == LOG_WARN) {
            printf("[WARN]");
            printf("%s\n", msg);
    if(condition == LOG_CONSTRUCT) {
            printf("[CERROR]");
            printf("%s\n", msg);
    }
    if(condition == LOG_ERROR) {
            Error_msg(msg, true);
    }
    if(condition == LOG_WARN) {
            printf("[WARN]");
            printf("%s\n", msg);
    }

    if(condition == LOG_INFO) {
            printf("[INFO]");
            printf("%s\n", msg);
    }
    if(condition == LOG_FLAG) {
            printf("[FLAG]");
            printf("%s\n", msg);
    }

    }

}

static void log_setup(bool is_runing, logs_types condition, char message[255]) {

    char msg[255];
    strcpy(msg, message);


        if( is_runing == true ) {

            PMessage(condition, msg);

    } else {
        return; 
    }

}



static void Error_msg(const char* conditions, bool is_error) {

        if (is_error == true) {

            strcpy(error_message, conditions);

                printf("%s\n", conditions);

        } else {
            return;
            }
}    
