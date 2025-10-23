#include <cstdio>
#define SIZE 1000
int main(int argc, char** argv) {
	int arr[SIZE] = { 0 };
	int a = 0;
	int inf = 1001;
	int sup = -1001;
	scanf_s("%d", &a);
	for (int i = 0; i < a; ++i) {
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < a; ++i) {
		if (sup < arr[i]) {
			sup = arr[i];
		}
	}
	for (int i = 0; i < a; ++i) {
		if (inf > arr[i]) {
			inf = arr[i];
		}
	}
	for (int i = 0; i < a; ++i) {
		if (sup == arr[i]) {
			arr[i] = inf;
		}
		printf("%d ", arr[i]);
	}
}