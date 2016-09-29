#include <stdio.h>
#define MONTHS 12

int mainb10(void) {
	int days[MONTHS] = {31,28, [4] = 31,30,31, [1] = 29};
	int index;

	for (index = 0; index < MONTHS; index++) {
		printf("Month %2d has %2d days.\n", index+1, days[index]);
	}

	return 0;
}
