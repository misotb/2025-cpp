#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
double pow(double, int);
int main(int argc, char** argv) {
	double a = 0;
	int b = 0;
	scanf("%lf %d", &a, &b);
	printf("%lf", pow(a, b));
	return 0;
}
double pow(double a, int b) {
	if (b == 0) {
		return 1;
	}
	if (b > 0) {
		return a * pow(a, b - 1);
	}
	if (b < 0) {
		return pow(a, b + 1) / a;
	}
}