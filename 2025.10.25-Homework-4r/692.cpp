#include <cstdio>
#include <cmath>
#define SIZE 1000
int main(int argc, char** argv) {
	int arr[SIZE] = { 0 };
	int a = 0;
	int ma = 2001;
	int m = 0;
	int b = 0;
	scanf_s("%d", &a);
	for (int i = 0; i < a; ++i) {
		scanf_s("%d", &arr[i]);
	}
	scanf_s("%d", &b);
	for (int i = 0; i < a; ++i) {
		if (ma >= abs(arr[i] - b)) {
			if (ma == abs(arr[i] - b)) {
				ma = abs(arr[i] - b);
				if (arr[i] < m) {
					m = arr[i];
				}
			}
			else {
				ma = abs(arr[i] - b);
				m = arr[i];
			}
		}
	}
	printf("%d", m);
}