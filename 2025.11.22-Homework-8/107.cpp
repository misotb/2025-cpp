#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <stdlib.h>
#include <string.h>
int main(int argc, char** argv) {
    char S1[100];
    char* word = NULL;
    char* lword = NULL;
    int c = 0;
    int mc = 0;
    fgets(S1, sizeof(S1), stdin);
    S1[strcspn(S1, "\n")] = '\0';
    word = strtok(S1, " ");
    while (word != NULL) {
        for (int i = 0; word[i] != '\0'; ++i) {
            c++;
        }
        if (c > mc) {
            mc = c;
            lword = word;
        }
        c = 0;
        word = strtok(NULL, " ");
    }
    printf("%s\n", lword);
    printf("%d", mc);
    free(word);
    free(lword);
    return 0;
}