#include <cstdio>
int main(int argc, char** argv) {
	int n = 0;
	int nl = 0;
	int m1 = 0;
	int m2 = 0;
	do {
		scanf_s("%d", &n);
		if (n == nl) {
			m1 += 1;
		}
		else {
			if (m1 > m2) {
				m2 = m1;
			}
			m1 = 0;
		}
		nl = n;
	} while (n != 0);
	printf("%d", m2 + 1);
}