#include <cstdio>
int main(int argc, char** argv) {
	int k = 0;
	scanf_s("%d", &k);
	printf("%lld", (long long int) ((k / 10) * (k / 10) + (k / 10)) * 100 + 25);
	return 0;
}
/* код для ленивых:
#include <cstdio>
int main(int argc, char** argv) {
	int k = 0;
	scanf_s("%d", &k);
	printf("%lld", (long long int) k * k);
	return 0;
}
*/