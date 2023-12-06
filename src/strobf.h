#ifndef STROBF_H
#define STROBF_H

#include <stdlib.h>
#include <string.h>

void strobf(char* buff, char* key, int size) {
    int klen = strlen(key);

    for (int i = 0; i < size / sizeof(char); ++i) {
        if (buff[i] == '\0')
            break;

        buff[i] += key[i % klen];
    }
}

void obfstr(char* buff, char* key, int size) {
    int klen = strlen(key);

    for (int i = 0; i < size / sizeof(char); ++i) {
        if (buff[i] == '\0')
            break;

        buff[i] -= key[i % klen];
    }
}

#endif
