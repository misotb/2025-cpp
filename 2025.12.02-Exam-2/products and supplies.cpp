#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <string.h>
#include <stdlib.h>
#define DLN 12
#define NLM 100
typedef struct {
	char* date;
	int qop;
}Supply;
typedef struct {
	char* name;
	float price;
	int qos;
	Supply* supplies;
} Product;
void sinit(Product, char[DLN], int);
void pinit(Product*, char*, float, int);
void addsup(Product*, char[DLN], int);
void msup(Product*, int);
void prints(Supply);
void printss(Supply*, int);
void printp(Product);
void printpp(Product*, int);
void frees(Supply);
void freess(Supply*);
void freep(Product);
void freepp(Product*, int);
void clear_input_buffer();
int main(int argc, char** argv) {
	int n = 0;
	int addn = 0;
	float pricebuf = 0.0;
	int qosbuf = 0;
	int nqopbuf = 0;
	char* namebuf = (char*)calloc(NLM, sizeof(char));
	char* ndatebuf = (char*)calloc(DLN, sizeof(char));
	printf("Enter the number of products: \n");
	scanf("%d", &n);
	clear_input_buffer();
	if (n < 1) {
		printf("Invalid input");
	}
	else {
		Product* products = (Product*)calloc(n, sizeof(Product));
		if (products == NULL) {
			printf("MEMORY ERROR");
			exit(1);
		}
		for (int i = 0; i < n; ++i) {
			pricebuf = 0.0;
			qosbuf = 0;
			printf("Enter the name of product: \n");
			fgets(namebuf, NLM, stdin);
			namebuf[strcspn(namebuf, "\n")] = '\0';
			printf("Enter the price of product: \n");
			scanf("%f", &pricebuf);
			printf("Enter the number of its supplies: \n");
			scanf("%d", &qosbuf);
			clear_input_buffer();
			pinit(&(products[i]), namebuf, pricebuf, qosbuf);
		}
		printf("Enter the number of the product to which you want to add the supply: \n");
		scanf("%d", &addn);
		clear_input_buffer();
		printf("Enter the date of new supply: \n");
		fgets(ndatebuf, NLM, stdin);
		ndatebuf[strcspn(ndatebuf, "\n")] = '\0';
		printf("Enter the number of products in new supply \n");
		scanf("%d", &nqopbuf);
		clear_input_buffer();
		addsup(&(products[addn - 1]), ndatebuf, nqopbuf);
		msup(products, n);
		printf("Here`s all products and their supplies \n");
		printpp(products, n);
		freepp(products, n);
		n = 0;
		addn = 0;
		pricebuf = 0.0;
		qosbuf = 0;
		nqopbuf = 0;
		free(namebuf);
		free(ndatebuf);
	}
	return 0;
}
void sinit(Supply* s, char* date, int qop) {
	s->date = (char*)calloc(DLN, sizeof(char));
	if (s->date == NULL) {
		printf("MEMORY ERROR");
		exit(1);
	}
	strcpy(s->date, date);
	s->qop = qop;
}
void pinit(Product* p, char* name, float price, int qos) {
	int qopbuf = 0;
	p->name = (char*)calloc(NLM, sizeof(char));
	if (p->name == NULL) {
		printf("MEMORY ERROR");
		exit(1);
	}
	strcpy(p->name, name);
	p->price = price;
	p->qos = qos;
	p->supplies = (Supply*)calloc(qos, sizeof(Supply));
	if (p->supplies == NULL) {
		printf("MEMORY ERROR");
		exit(1);
	}
	char* datebuf = (char*)calloc(DLN, sizeof(char));
	if (datebuf == NULL) {
		printf("MEMORY ERROR");
		exit(1);
	}
	for (int i = 0; i < qos; ++i) {
		printf("Enter the date of supply: \n");
		fgets(datebuf, DLN, stdin);
		datebuf[strcspn(datebuf, "\n")] = '\0';
		printf("Enter the number of products in supply: \n");
		scanf("%d", &qopbuf);
		clear_input_buffer();
		sinit(&(p->supplies[i]), datebuf, qopbuf);
	}
}
void addsup(Product* p, char* ndate, int nqop) {
	p->supplies = (Supply*)realloc(p->supplies, (p->qos + 1) * sizeof(Supply));
	if (p->supplies == NULL) {
		printf("MEMORY ERROR");
		exit(1);
	}
	sinit(&(p->supplies[p->qos]), ndate, nqop);
	p->qos += 1;
}
void msup(Product* products, int n) {
	int maxsup = 0;
	for (int i = 0; i < n; ++i) {
		if (products[maxsup].qos < products[i].qos) {
			maxsup = i;
		}
	}
	printf("The product with the most supplies: %s \n", products[maxsup].name);
	printf("The number of its supllies: %d \n", products[maxsup].qos);
}
void prints(Supply s) {
	printf("Date: %s ", s.date);
	printf("Product quantity: %d \n", s.qop);
}
void printss(Supply* supplies, int qos) {
	for (int i = 0; i < qos; ++i) {
		prints(supplies[i]);
	}
}
void printp(Product p) {
	printf("Product name: %s \n", p.name);
	printf("Product price: %f \n", p.price);
	printf("The number of its supllies: %d \nSupplies: \n", p.qos);
	printss(p.supplies, p.qos);
}
void printpp(Product* products, int n) {
	for (int i = 0; i < n; ++i) {
		printp(products[i]);
	}
}
void frees(Supply s) {
	free(s.date);
	s.qop = 0;
}
void freess(Supply* supplies, int qos) {
	for (int i = 0; i < qos; ++i) {
		frees(supplies[i]);
	}
	free(supplies);
}
void freep(Product p) {
	free(p.name);
	p.price = 0.0;
	freess(p.supplies, p.qos);
	p.qos = 0;
}
void freepp(Product* products, int n) {
	for (int i = 0; i < n; ++i) {
		freep(products[i]);
	}
	free(products);
}
void clear_input_buffer() {
	int c = 0;
	while ((c = getchar()) != '\n' && c != EOF) {}
}
