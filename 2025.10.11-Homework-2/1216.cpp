#include <cstdio>
int main(int argc, char** argv) {
    int a1 = 0;
    int a2 = 0;
    int b1 = 0;
    int b2 = 0;
    int c1 = 0;
    int c2 = 0;
    int a3 = 0;
    int a4 = 0;
    int b3 = 0;
    int b4 = 0;
    int c3 = 0;
    int c4 = 0;
    scanf_s("%d %d %d", &a1, &b1, &c1);
    scanf_s("%d %d %d", &a2, &b2, &c2);
    a3 = a1 >= b1 && a1 >= c1 ? a1 : b1 >= c1 && b1 >= a1 ? b1 : c1;
    c3 = a1 <= b1 && a1 <= c1 ? a1 : b1 <= c1 && b1 <= a1 ? b1 : c1;
    b3 = a1 + b1 + c1 - a3 - c3;
    a4 = a2 >= b2 && a2 >= c2 ? a2 : b2 >= c2 && b2 >= a2 ? b2 : c2;
    c4 = a2 <= b2 && a2 <= c2 ? a2 : b2 <= c2 && b2 <= a2 ? b2 : c2;
    b4 = a2 + b2 + c2 - a4 - c4;
    if (a3 == a4 && b3 == b4 && c3 == c4) {
        printf("Boxes are equal");
    }
    else if (a3 >= a4 && b3 >= b4 && c3 >= c4) {
        printf("The first box is larger than the second one");
    }
    else if (a3 <= a4 && b3 <= b4 && c3 <= c4) {
        printf("The first box is smaller than the second one");
    }
    else {
        printf("Boxes are incomparable");
    }
    return 0;
}