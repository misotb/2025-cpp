#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int phi(int);
int main(int argc, char** argv) {
	int n = 0;
	scanf("%d", &n);
	printf("%d", phi(n));
	return 0;
}
int phi(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	return (phi(n - 2) + phi(n - 1));
}