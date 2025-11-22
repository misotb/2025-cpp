#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <string.h>
int main(int argc, char** argv) {
    char S1[100];
    int n = 0;
    int c = 0;
    fgets(S1, sizeof(S1), stdin);
    S1[strcspn(S1, "\n")] = '\0';
    for (int i = 0; S1[i] != '\0'; ++i) {
        n++;
    }
    for (int i = 0; i < n; ++i) {
        if (S1[i] != S1[n - i - 1]) {
            c++;
        }
    }
    if (c == 0) {
        printf("yes");
    }
    else {
        printf("no");
    }
    return 0;
}