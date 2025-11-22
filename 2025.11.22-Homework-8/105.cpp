#include <string.h>
bool Compare(char*, char*);
int main(int argc, char** argv) {
    char S1[100];
    char S2[100];
    fgets(S1, sizeof(S1), stdin);
    S1[strcspn(S1, "\n")] = '\0';
    fgets(S2, sizeof(S2), stdin);
    S2[strcspn(S2, "\n")] = '\0';
    if (Compare(S1, S2) == 1) {
        printf("yes");
    }
    else {
        printf("no");
    }
    return 0;
}
bool Compare(char* S1, char* S2) {
    int d = strcmp(S1, S2);
    if (d == 0) {
        return 1;
    }
    else {
        return 0;
    }
}