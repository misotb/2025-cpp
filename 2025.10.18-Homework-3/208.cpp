#include <cstdio>
int main(int argc, char** argv) {
	int a = 0;
	int b = 1;
	int c = 0;
	int n = 0;
	int m = 0;
	scanf_s("%d", &n);
	while (m < n + 1) {
		c = a;
		a = b;
		b += c;
		m += 1;
	}
	printf("%d", c);
}