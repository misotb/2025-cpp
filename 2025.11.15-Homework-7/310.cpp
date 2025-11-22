#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
void IsPrimeCheck(unsigned int);
int main(int argc, char** argv) {
	unsigned int n = 0;
	scanf("%ud", &n);
	IsPrimeCheck(n);
	return 0;
}
void IsPrimeCheck(unsigned int n) {
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			printf("composite");
			return;
		}
	}
	printf("prime");
	return;
}