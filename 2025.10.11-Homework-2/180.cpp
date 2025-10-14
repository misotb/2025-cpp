#include <cstdio>
#include <cmath>
int main(int argc, char** argv) {
    float a = 0;
    float b = 0;
    float c = 0;
    float d = 0;
    scanf_s("%f %f %f", &a, &b, &c);
    d = (b * b) - (4 * a * c);
    if (a != 0) {
        if (d < 0) {
            printf("0");
        }
        else if (d == 0) {
            printf("1\n%f", -b / (2 * a));
        }
        else {
            printf("2\n%f\n%f", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));
        }
    }
    else if (b != 0) {
        if (c != 0) {
            printf("1\n%f", -c / b);
        }
        else {
            printf("1\n%f", c);
        }
    }
    else if (c != 0) {
        printf("0");
    }
    else {
        printf("-1");
    }
    return 0;
}