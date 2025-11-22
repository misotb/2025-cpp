#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
bool IsDigit(unsigned char);
int main(int argc, char** argv) {
	unsigned char c = ' ';
	scanf("%c", &c);
	if (IsDigit(c) == 1) {
		printf("yes");
	}
	else {
		printf("no");
	}
	return 0;
}
bool IsDigit(unsigned char c) {
	if ((c == '0') || (c == '1') || (c == '2') || (c == '3') || (c == '4') || (c == '5') || (c == '6') || (c == '7') || (c == '8') || (c == '9')) {
		return 1;
	}
	return 0;
}