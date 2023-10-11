#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(void) {
    char* original = "Test string containing a bunch of words.";
    char* password = "hunter2";

    int data_len = strlen(original);
    int key_len = strlen(password);

    char* obf = malloc((data_len + 1) * sizeof(char));
    char* str = malloc((data_len + 1) * sizeof(char));

    for (int i = 0; i < data_len; ++i) {
        obf[i] = original[i] + password[i % key_len];
    }

    for (int i = 0; i < data_len; ++i) {
        str[i] = obf[i] - password[i % key_len];
    }

    printf("original: %s\n", original);
    printf("obf: '%s' (%d)\n", obf, strlen(obf));
    printf("str: '%s' (%d)\n", str, strlen(str));

    free(obf);

    return 0;
}
