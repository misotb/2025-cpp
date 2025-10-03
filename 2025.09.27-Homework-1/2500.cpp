#include <cstdio>
int main(int argc, char** argv) {
	int k = 0;
	int n = 0;
	scanf_s("%d %d", &k, &n);
	printf("%d %d", n / k + 1 - ((k - n % k) / k), (((k - n % k) / k) * k + (n % k)));
	return 0;
}