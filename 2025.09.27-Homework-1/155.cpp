#include <cstdio>
int main(int argc, char** argv) {
	int k = 0;
	scanf_s("%d", &k);
	printf("%d", (k / 100) + ((k / 10) % 10) + (k % 10));
	return 0;
}