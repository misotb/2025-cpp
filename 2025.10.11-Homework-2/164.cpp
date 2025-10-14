#include <cstdio>
int main(int argc, char** argv) {
    int n = 0;
    scanf_s("%d", &n);
    if (n / 100000 + (n / 10000) % 10 + (n / 1000) % 10 == (n / 100) % 10 + (n / 10) % 10 + n % 10) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}