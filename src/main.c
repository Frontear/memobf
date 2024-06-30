#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include <memobf.h>

int main(void) {
    char* buff = calloc(1024, sizeof(char));
    strcpy(buff, "Lorem ipsum sit dolor amet");
    int size = strlen(buff) * sizeof(char);

    printf("%s\n", buff);
    memobf(buff, size, "hunter2");
    printf("%s\n", buff);
    obfmem(buff, size, "hunter2");
    printf("%s\n", buff);

    free(buff);

    return 0;
}
