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

// ----- STRUCT CHECK BOTPERMISION -----------//

typedef enum {

    STAT_ADMIN,
    STAT_WRITE,
    STAT_READ,
    STAT_ALL_PERMISION

}discord_basic;

// ----- STRUCT CHECK USER COMAND EXECUTE PERMISION -----------//

typedef enum {

    IS_ADMIN,
    IS_MEMBER,
    HAS_PERM,
    HAS_RANG

}admin_perm;

// ------------ GLOBAL FUNCTIONS ---------- //

void check_basic(discord_basic* condition);

void check_permision_of_member(admin_perm* perm);