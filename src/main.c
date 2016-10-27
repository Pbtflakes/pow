#include <stdio.h>
#include "utils.h"

int main () {
	int i;
	for (i = 0; i < 10; i++) {
		printf ("%d\t%d\t%d\n", i, power (2, i), power (-3, i));
	}
	return 0;
}

