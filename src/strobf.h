#ifndef STROBF_H
#define STROBF_H

#include <stdlib.h>
#include <string.h>

void strobf(char* str, char* key, char** obf) {
    int slen = strlen(str);
    int klen = strlen(key);

    for (int i = 0; i < slen; ++i) {
        (*obf)[i] = str[i] + key[i % klen];
    }
}

void obfstr(char* obf, char* key, char** str) {
    int olen = strlen(obf);
    int klen = strlen(key);

    for (int i = 0; i < olen; ++i) {
        (*str)[i] = obf[i] - key[i % klen];
    }
}

#endif
