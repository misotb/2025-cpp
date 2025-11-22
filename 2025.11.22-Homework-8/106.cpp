#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <stdlib.h>
#include <string.h>
int main(int argc, char** argv) {
    char S1[100];
    char* word = NULL;
    int c = 0;
    fgets(S1, sizeof(S1), stdin);
    S1[strcspn(S1, "\n")] = '\0';
    word = strtok(S1, " ");
    while (word != NULL) {
        c++;
        word = strtok(NULL, " ");
    }
    printf("%d", c);
    free(word);
    return 0;
}