#include <stdio.h>

int power (int m, int n);

int main () {
	int i;
	for (i = 0; i < 10; i++) {
		printf ("%d\t%d\t%d\n", i, power (2, i), power (-3, i));
	}
}

int power (int base, int exp) {
	int i;
	int p = 1;
	for (i = 1; i <= exp; i++) {
		p = p * base;
	}
	return p;
}
