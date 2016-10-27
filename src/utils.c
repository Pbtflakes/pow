#include "utils.h"

int power (int base, int exp) {
	int i;
	int p = 1;
	for (i = 1; i <= exp; i++) {
		p = p * base;
	}
	return p;
}
