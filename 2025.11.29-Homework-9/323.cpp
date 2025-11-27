#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cmath>
#include <stdlib.h>
typedef struct {
	float x;
	float y;
} Point;
double masscenterx(Point*, int);
double masscentery(Point*, int);
void pinit(Point*, int, int);
void pprint(Point* p);
int main(int argc, char** argv) {
	int n = 0;
	float mcx = 0;
	float mcy = 0;
	int x0 = 0;
	int y0 = 0;
	scanf("%d", &n);
	Point* points = (Point*)calloc(n, sizeof(Point));
	for (int i = 0; i < n; ++i) {
		scanf("%d %d", &x0, &y0);
		pinit(&points[i], x0, y0);
	}
	for (int i = 0; i < n; ++i) {
		mcx += masscenterx(&points[i], n);
		mcy += masscentery(&points[i], n);
	}
	free(points);
	printf("%f %f", mcx, mcy);
	return 0;
}
double masscenterx(Point* p, int n) {
	return p->x / n;
}
double masscentery(Point* p, int n) {
	return p->y / n;
}
void pinit(Point* p, int x, int y) {
	p->x = x;
	p->y = y;
}