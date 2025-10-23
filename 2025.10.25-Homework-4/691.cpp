#include <cstdio>
#define SIZE 1000
int main(int argc, char** argv) {
	int arr[SIZE] = { 0 };
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d", &a);
	for (int i = 0; i < a; ++i) {
		scanf_s("%d", &arr[i]);
	}
	scanf_s("%d", &b);
	for (int i = 0; i < a; ++i) {
		if (b == arr[i]) {
			c++;
		}
	}
	printf("%d", c);
}