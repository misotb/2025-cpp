#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cmath>
#include <stdlib.h>
typedef struct {
	int x;
	int y;
} Point;
double dist(Point*);
void pinit(Point*, int, int);
void pprint(Point* p);
int main(int argc, char** argv) {
	int n = 0;
	int m = 0;
	float md = 0;
	int x0 = 0;
	int y0 = 0;
	scanf("%d", &n);
	Point* points = (Point*)calloc(n, sizeof(Point));
	for (int i = 0; i < n; ++i) {
		scanf("%d %d", &x0, &y0);
		pinit(&points[i], x0, y0);
	}
	for (int i = 0; i < n; ++i) {
		if (dist(&points[i]) > md) {
			m = i;
			md = dist(&points[i]);
		}
	}
	pprint(&points[m]);
	free(points);
	return 0;
}
double dist(Point* p) {
	return sqrt((p->x * p->x) + (p->y * p->y));
}
void pinit(Point* p, int x, int y) {
	p->x = x;
	p->y = y;
}
void pprint(Point* p) {
	printf("%d %d", p->x, p->y);
}
