#include <cstdio>
int main(int argc, char** argv) {
    int rs = 0;
    int rf = 0;
    int ls = 0;
    int lf = 0;
    scanf_s("%d %d", &rs, &ls);
    scanf_s("%d %d", &rf, &lf);
    if ((((rs == rf + 1) || (rf == rs + 1)) && ((ls == lf + 2) || (lf == ls + 2))) || (((ls == lf + 1) || (lf == ls + 1)) && ((rs == rf + 2) || (rf == rs + 2)))) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}