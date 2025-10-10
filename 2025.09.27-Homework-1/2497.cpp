#include <cstdio>
int main(int argc, char** argv) {
	long long a = 0;
	long long b = 0;
	long long c = 0;
	scanf_s("%lld %lld %lld", &a, &b, &c);
	long long s = a + b + c;
	printf("%lld", s);
	return 0;
}