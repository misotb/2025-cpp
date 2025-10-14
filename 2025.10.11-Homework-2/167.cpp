#include <cstdio>
int main(int argc, char** argv) {
    int n = 0;
    scanf_s("%d", &n);
    if (n % 2 == 0) {
        printf("%d", n / 2);
    }
    else if (n == 1) {
        printf("0");
    }
    else {
        printf("%d", n);
    }
    return 0;
}