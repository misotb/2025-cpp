#include <cstdio>
int main(int argc, char** argv) {
	int n = 0;
	int m1 = 0;
	int m2 = 0;
	do {
		scanf_s("%d", &n);
		if (n >= m2) {
			m2 = n;
		}
		if (n >= m1) {
			m2 = m1;
			m1 = n;
		}
	} while (n != 0);
	printf("%d", m2);
}