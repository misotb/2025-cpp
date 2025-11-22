#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
void Hahanoi(int, int, int);
int main(int argc, char** argv) {
	int n = 0;
	scanf("%d", &n);
	Hahanoi(n, 1, 2);
	return 0;
}
void Hahanoi(int n, int fr, int to) {
	if (n == 0) {
		return;
	}
	int mid = 6 - fr - to;
	Hahanoi(n - 1, fr, mid);
	printf("Disk %d move from %d to %d \n", n, fr, to);
	Hahanoi(n - 1, mid, to);
}