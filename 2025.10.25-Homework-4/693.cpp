#include <cstdio>
#define SIZE 1000
int main(int argc, char** argv) {
	int arr[SIZE] = { 0 };
	int a = 0;
	int b = 1;
	int c = 1;
	int m = -1001;
	int im = 0;
	scanf_s("%d", &a);
	for (int i = 0; i < a; ++i) {
		scanf_s("%d", &arr[i]);
	}
	scanf_s("%d %d", &b, &c);
	for (int i = b - 1; i < c; ++i) {
		if (m < arr[i]) {
			m = arr[i];
			im = i;
		}
	}
	printf("%d %d", m, im + 1);
}