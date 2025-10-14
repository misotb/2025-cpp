#include <cstdio>
int main(int argc, char** argv) {
	int rs = 0;
	int rf = 0;
	int ls = 0;
	int lf = 0;
	scanf_s("%d %d", &rs, &ls);
	scanf_s("%d %d", &rf, &lf);
	if ((rs == rf) || (ls == lf) || (ls - rs == lf - rf) || (ls + rs == lf + rf)) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	return 0;
}