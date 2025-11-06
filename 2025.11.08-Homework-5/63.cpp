#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <stdlib.h>
int main(int argc, char** argv) {
	int n = 0;
	scanf("%d", &n);
	int* arr = (int*)calloc(n, sizeof(int));
	for (int i = 0; i < n; ++i) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i += 2) {
		printf("%d ", arr[i]);
	}
}