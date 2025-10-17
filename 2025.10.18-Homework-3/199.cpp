#include <cstdio>
int main(int argc, char** argv) {
	int x = 0;
	int y = 0;
	scanf_s("%d %d", &x, &y);
	int m = x;
	while (x % y != 0) {
		x += m;
	}
	printf("%d", x);
}