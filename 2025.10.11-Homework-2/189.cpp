#include <cstdio>
int main(int argc, char** argv) {
	int rs = 0;
	int rf = 0;
	int ls = 0;
	int lf = 0;
	scanf_s("%d %d", &rs, &ls);
	scanf_s("%d %d", &rf, &lf);
	if (rs == rf && ((ls == 2 && lf == 4) || (ls + 1 == lf)) && ls != 1) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	return 0;
}