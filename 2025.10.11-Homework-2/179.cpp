#include <cstdio>
int main(int argc, char** argv) {
    int a = 0;
    int b = 0;
    int c = 0;
    scanf_s("%d %d %d", &a, &b, &c);
    if (a != 0) {
        printf("%d", a);
        if (b != 0) {
            if (b > 0) {
                if (b == 1) {
                    printf("+x");
                }
                else {
                    printf("+%dx", b);
                }
            }
            else {
                if (b == -1) {
                    printf("-x");
                }
                else {
                    printf("%dx", b);
                }
            }
            if (c != 0) {
                if (c > 0) {
                    if (c == 1) {
                        printf("+y");
                    }
                    else {
                        printf("+%dy", c);
                    }
                }
                else {
                    if (c == -1) {
                        printf("-y");
                    }
                    else {
                        printf("%dy", c);
                    }
                }
            }
        }
        else if (c != 0) {
            if (c > 0) {
                if (c == 1) {
                    printf("+y");
                }
                else {
                    printf("+%dy", c);
                }
            }
            else {
                if (c == -1) {
                    printf("-y");
                }
                else {
                    printf("%dy", c);
                }
            }
        }
    }
    else if (b != 0) {
        if (b > 0) {
            if (b == 1) {
                printf("x");
            }
            else {
                printf("%dx", b);
            }
        }
        else {
            if (b == -1) {
                printf("-x");
            }
            else {
                printf("%dx", b);
            }
        }
        if (c != 0) {
            if (c > 0) {
                if (c == 1) {
                    printf("+y");
                }
                else {
                    printf("+%dy", c);
                }
            }
            else {
                if (c == -1) {
                    printf("-y");
                }
                else {
                    printf("%dy", c);
                }
            }
        }
    }
    else if (c != 0) {
        if (c > 0) {
            if (c == 1) {
                printf("y");
            }
            else {
                printf("%dy", c);
            }
        }
        else {
            if (c == -1) {
                printf("-y");
            }
            else {
                printf("%dy", c);
            }
        }
    }
    else {
        printf("0");
    }
    return 0;
}