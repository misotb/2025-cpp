#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {
	char* results;
} Student;
void sinit(Student*, char*);
float mathgpa(Student*, int);
float physgpa(Student*, int);
float ccgpa(Student*, int);
int main(int argc, char** argv) {
	int n = 0;
	double mgpa = 0;
	double pgpa = 0;
	double cgpa = 0;
	char* res = (char*)calloc(50, sizeof(char));
	scanf("%d", &n);
	Student* students = (Student*)calloc(n + 1, sizeof(Student));
	for (int i = 0; i < n + 1; ++i) {
		fgets(res, 50 * sizeof(char), stdin);
		res[strcspn(res, "\n")] = '\0';
		sinit(&students[i], res);
	}
	for (int j = 0; j < n + 1; ++j) {
		mgpa += mathgpa(&students[j], n);
		pgpa += physgpa(&students[j], n);
		cgpa += ccgpa(&students[j], n);
	}
	printf("%lf %lf %lf", mgpa, pgpa, cgpa);
	free(res);
	for (int i = 0; i < n + 1; ++i) {
		free(students[i].results);
	}
	free(students);
	return 0;
}
void sinit(Student* s, char* res) {
	s->results = (char*)calloc(50, sizeof(char));
	strcpy(s->results, res);
}
float mathgpa(Student* s, int n) {
	if (s->results[strlen(s->results) - 5] == '5') {
		return 5.0 / n;
	}
	else if (s->results[strlen(s->results) - 5] == '4') {
		return 4.0 / n;
	}
	else if (s->results[strlen(s->results) - 5] == '3') {
		return 3.0 / n;
	}
	else if (s->results[strlen(s->results) - 5] == '2') {
		return 2.0 / n;
	}
	else if (s->results[strlen(s->results) - 5] == '1') {
		return 1.0 / n;
	}
	else {
		return 0;
	}
}
float physgpa(Student* s, int n) {
	if (s->results[strlen(s->results) - 3] == '5') {
		return 5.0 / n;
	}
	else if (s->results[strlen(s->results) - 3] == '4') {
		return 4.0 / n;
	}
	else if (s->results[strlen(s->results) - 3] == '3') {
		return 3.0 / n;
	}
	else if (s->results[strlen(s->results) - 3] == '2') {
		return 2.0 / n;
	}
	else if (s->results[strlen(s->results) - 3] == '1') {
		return 1.0 / n;
	}
	else {
		return 0;
	}
}
float ccgpa(Student* s, int n) {
	if (s->results[strlen(s->results) - 1] == '5') {
		return 5.0 / n;
	}
	else if (s->results[strlen(s->results) - 1] == '4') {
		return 4.0 / n;
	}
	else if (s->results[strlen(s->results) - 1] == '3') {
		return 3.0 / n;
	}
	else if (s->results[strlen(s->results) - 1] == '2') {
		return 2.0 / n;
	}
	else if (s->results[strlen(s->results) - 1] == '1') {
		return 1.0 / n;
	}
	else {
		return 0;
	}
}