#include <cstdio>
int main(int argc, char** argv) {
	int k = 0;
	int m = 0;
	scanf_s("%d %d", &k, &m);
	printf("%d", (2 - (((m - m % k) / m) + ((k - k % m) / k) - (((m - m % k) / m) * ((k - k % m) / k)))));
	return 0;
}