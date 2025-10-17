#include <cstdio>
int main(int argc, char** argv) {
	long long int a = 0;
	long long int b = 0;
	long long int c = 0;
	long long int d = 0;
	int x = 0;
	scanf_s("%lld %lld %lld %lld", &a, &b, &c, &d);
	for (int x = -100; x < 101; ++x) {
		if (((a * x * x * x) + (b * x * x) + (c * x) + d) == 0) {
			printf("%d ", x);
		}
	}
}