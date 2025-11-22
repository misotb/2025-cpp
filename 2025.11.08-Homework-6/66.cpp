#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <stdlib.h>
int main(int argc, char** argv) {
	int n = 0;
	int c = 0;
	scanf("%d", &n);
	int* arr = (int*)calloc(n, sizeof(int));
	for (int i = 0; i < n; ++i) {
		scanf("%d", &arr[i]);
	}
	for (int i = 1; i < n; ++i) {
		if (arr[i] > arr[i - 1]) {
			c++;
		}
	}
	free(arr);
	printf("%d", c);
}