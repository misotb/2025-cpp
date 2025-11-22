#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int min(int, int, int, int);
int main(int argc, char** argv) {
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d", min(a, b, c, d));
	return 0;
}
int min(int a, int b, int c, int d) {
	int m = 1000000000;
	if (m > a) {
		m = a;
	}
	if (m > b) {
		m = b;
	}
	if (m > c) {
		m = c;
	}
	if (m > d) {
		m = d;
	}
	return m;
}