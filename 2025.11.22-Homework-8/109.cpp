#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <stdlib.h>
#include <string.h>
void SameLetter(char*);
int main(int argc, char** argv) {
    char* S1 = (char*)calloc(40, sizeof(char));
    fgets(S1, 40, stdin);
    S1[strcspn(S1, "\n")] = '\0';
    SameLetter(S1);
    free(S1);
    return 0;
}
void SameLetter(char* S1) {
    for (int i = 0; S1[i] != '\0'; ++i) {
        for (int j = i + 1; S1[j] != '\0'; ++j) {
            if (S1[i] == S1[j]) {
                printf("%c", S1[i]);
                return;
            }
        }
    }
}