#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cmath>
#include <stdlib.h>
typedef struct {
	int x;
	int y;
} Point;
double distbtw(Point*, Point*);
void pinit(Point*, int, int);
int main(int argc, char** argv) {
	int n = 0;
	double md = 0;
	int x0 = 0;
	int y0 = 0;
	scanf("%d", &n);
	Point* points = (Point*)calloc(n, sizeof(Point));
	for (int i = 0; i < n; ++i) {
		scanf("%d %d", &x0, &y0);
		pinit(&points[i], x0, y0);
	}
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (distbtw(&points[i], &points[j]) > md) {
				md = distbtw(&points[i], &points[j]);
			}
		}
	}
	free(points);
	printf("%.13lf", md);
	return 0;
}
double distbtw(Point* p1, Point* p2) {
	return sqrt(((p1->x - p2->x) * (p1->x - p2->x)) + ((p1->y - p2->y) * (p1->y - p2->y)));
}
void pinit(Point* p, int x, int y) {
	p->x = x;
	p->y = y;
}