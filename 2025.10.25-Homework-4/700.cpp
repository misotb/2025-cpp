#include <cstdio>
#define SIZE 1000
int main(int argc, char** argv) {
	int arr[SIZE] = { 0 };
	int arr1[SIZE] = { 0 };
	int arr2[SIZE] = { 0 };
	int n = 0;
	int a = 1;
	int b = 1;
	int c = 1;
	int d = 1;
	scanf_s("%d %d %d %d %d", &n, &a, &b, &c, &d);
	for (int i = 0; i < n; ++i) {
		arr[i] = i + 1;
		arr1[i] = i + 1;
	}
	for (int i = 0; i < b - a + 1; ++i) {
		arr1[a + i - 1] = arr[b - i - 1];
	}
	for (int i = 0; i < n; ++i) {
		arr2[i] = arr1[i];
	}
	for (int i = 0; i < d - c + 1; ++i) {
		arr2[c + i - 1] = arr1[d - i - 1];
	}
	for (int i = 0; i < n; ++i) {
		printf("%d ", arr2[i]);
	}
}