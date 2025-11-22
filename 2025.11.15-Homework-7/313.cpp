#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int Comb(int, int);
int main(int argc, char** argv) {
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	printf("%d", Comb(n, k));
	return 0;
}
int Comb(int n, int k) {
	if ((k == 0) || (k == n)) {
		return 1;
	}
	return (Comb(n - 1, k - 1) + Comb(n - 1, k));
}