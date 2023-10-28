#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "strobf.h"

int main(void) {
    char* buffer = malloc(100 * sizeof(char));
    

    for (int i = 0; i < 100; ++i) {
        buffer[i] = i + 'a';
    }

    memfrob(buffer, 100 * sizeof(char));

    for (int i = 0; i < 100; ++i) {
        printf("%c ", buffer[i]);
    }
    printf("\n");

    memfrob(buffer, 100 * sizeof(char));

    for (int i = 0; i < 100; ++i) {
        printf("%c ", buffer[i]);
    }
    printf("\n");


    free(buffer);

    return 0;
}
