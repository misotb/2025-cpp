#include <cstdio>
int main(int argc, char** argv) {
	double x = 0;
	double y = 0;
	int c = 1;
	scanf_s("%lf %lf", &x, &y);
	while (y - x > 0.000001) {
		x *= 1.15;
		c += 1;
	}
	printf("%d", c);
}