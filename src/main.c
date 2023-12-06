#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "strobf.h"

int main(void) {
    char* buff = malloc(1024 * sizeof(char));
    strcpy(buff, "Lorem ipsum dit dolor amet");

    printf("Demonstration of strobf (password 'hunter2'):\n");
    printf("Orignal string: %s\n", buff);
    strobf(buff, "hunter2", 1024 * sizeof(char));
    printf("Obfuscated string: %s\n", buff);
    obfstr(buff, "hunter2", 1024 * sizeof(char));
    printf("Revealed string (matches original): %s\n", buff);

    free(buff);

    return 0;
}
