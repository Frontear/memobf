#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "strobf.h"

int main(void) {
    char* original = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
    char* key = "hunter2";

    char* obf = malloc(1024 * sizeof(char));
    char* str = malloc(1024 * sizeof(char));

    printf("original: '%s' (%d)\n", original, strlen(original));

    strobf(original, key, &obf);
    obfstr(obf, key, &str);

    printf("obf (%s): '%s' (%d)\n", key, obf, strlen(obf));
    printf("str (%s): '%s' (%d)\n", key, str, strlen(str));

    obfstr(obf, "hunter1", &str);

    // notice the content is almost identical, because vignere will key-for-key shift, and the only diff char in the new key is 2 -> 1, leaving most of the content identical
    printf("obf (%s): '%s' (%d)\n", key, obf, strlen(obf));
    printf("str (%s): '%s' (%d)\n", "hunter1", str, strlen(str));

    obfstr(obf, "foobar", &str);

    // notice content becomes wildly different
    printf("obf (%s): '%s' (%d)\n", key, obf, strlen(obf));
    printf("str (%s): '%s' (%d)\n", "foobar", str, strlen(str));

    free(obf);
    free(str);

    return 0;
}
