#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "strobf.h"

int main(void) {
    char* string = "Test string";
    char* obf = malloc(sizeof(char) + sizeof(char) * strlen(string));
    char* str = malloc(sizeof(char) + sizeof(char) * strlen(string));

    obfstr(string, "hunter2", &obf);
    strobf(obf, "hunter2", &str);

    printf("Demonstration of strobf (password 'hunter2'):\n");
    printf("Orignal string: %s\n", string);
    printf("Obfuscated string: %s\n", obf);
    printf("Revealed string (matches original): %s\n", str);

    free(obf);
    free(str);

    return 0;
}
