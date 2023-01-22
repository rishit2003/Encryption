#include "Encrypt.h"

Encrypt::Encrypt(Password pass)
{

        /* allocating values to ptrs? - yes */
    char* pArr = new char[100]; // creating ptrs

    for(int i=0; i<100; i++) {
        pArr = nullptr;         // initialize to null
    }


    /**/for(int i=0; i<100; i++) {
        if (pass.get_pass() != NULL) {
            pArr[i] = pass.get_pass()[i];
        }
    }




}