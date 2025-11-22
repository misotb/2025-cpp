#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
bool Election(bool, bool, bool);
int main(int argc, char** argv) {
	int x1 = 0;
	int y1 = 0;
	int z1 = 0;
	scanf("%d %d %d", &x1, &y1, &z1);
	bool x = x1;
	bool y = y1;
	bool z = z1;
	printf("%d", Election(x, y, z));
	return 0;
}
bool Election(bool x, bool y, bool z) {
	return ((x && y) || (x && z) || (y && z));
}