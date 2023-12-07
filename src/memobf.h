#ifndef MEMOBF_H
#define MEMOBF_H

#include <assert.h>
#include <stdlib.h>
#include <string.h>

void memobf(void* buff, int size, char* key) {
    static_assert(sizeof(char) == 1);

    int kidx = 0;
    int klen = strlen(key);

    for (int i = 0; i < size; ++i) {
        ((char*) buff)[i] += key[kidx++];

        if (kidx > klen) {
            kidx = 0;
        }
    }
}

void obfmem(void* buff, int size, char* key) {
    static_assert(sizeof(char) == 1);

    int kidx = 0;
    int klen = strlen(key);

    for (int i = 0; i < size; ++i) {
        ((char*) buff)[i] -= key[kidx++];

        if (kidx > klen) {
            kidx = 0;
        }
    }
}

#endif
