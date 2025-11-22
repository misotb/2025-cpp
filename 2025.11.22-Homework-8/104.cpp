#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <string.h>
void RR(unsigned char);
int main(int argc, char** argv) {
	unsigned char c = ' ';
	scanf("%c", &c);
	RR(c);
	return 0;
}
void RR(unsigned char c) {
	const char* alfabet = "abcdefghijklmnopqrstuvwxyz";
	const char* Ualfabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for (int i = 0; i < 26; ++i) {
		if (c == alfabet[i]) {
			printf("%c", Ualfabet[i]);
			return;
		}
		else if (c == Ualfabet[i]) {
			printf("%c", alfabet[i]);
			return;
		}
	}
	printf("%c", c);
	return;
}