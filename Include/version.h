// ---------------------- //
// Made by abbys - 042    //
// discord @xabbys_       //
// LICENSE GPL 2.0        //
// ---------------------- //


#pragma once 

// ----- VERSION STRUCT  -----------//

typedef struct {
    int version_api;
    int major_api;
    int minor_path;
}version_t;


// ----- AUTHOR SECTION  -----------//

typedef struct {

    char author_name[255];
    char author_socjal_link_1[255];
    char author_socjal_link_2[255];
    char author_socjal_link_3[255];

}author_info_t;


// -----GLOBAL FUNCTIONS -----------//

void info(author_info_t* info, version_t* version);