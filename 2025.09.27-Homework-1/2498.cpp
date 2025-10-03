#include <cstdio>
int main(int argc, char** argv) {
	long long a = 0;
	scanf_s("%lld", &a);
	printf("%lld", (a / 2 + a % 2) * (a / 2 + a % 2));
	return 0;
}