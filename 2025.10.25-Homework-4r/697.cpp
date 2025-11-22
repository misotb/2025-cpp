#include <cstdio>
#define SIZE 1000
int main(int argc, char** argv) {
	int arr[SIZE] = { 0 };
	int a = 0;
	scanf_s("%d", &a);
	for (int i = 0; i < a; ++i) {
		scanf_s("%d", &arr[i]);
	}
	for (int i = a - 1; i > -1; --i) {
		printf("%d ", arr[i]);
	}
}