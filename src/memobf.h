#ifndef MEMOBF_H
#define MEMOBF_H

#include <assert.h>
#include <stdlib.h>
#include <string.h>

void memobf(void* buff, int size, char* key) {
    static_assert(sizeof(char) == 1);

    int klen = strlen(key);
    char* cast_buff = (char*) buff;

    for (int i = 0; i < size; ++i) {
        cast_buff[i] += key[i % klen];
    }
}

void obfmem(void* buff, int size, char* key) {
    static_assert(sizeof(char) == 1);

    int klen = strlen(key);
    char* cast_buff = (char*) buff;

    for (int i = 0; i < size; ++i) {
        cast_buff[i] -= key[i % klen];
    }
}

#endif
