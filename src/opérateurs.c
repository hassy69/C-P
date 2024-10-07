#include <stdio.h>

int main() {

	int a = 16;
	int b = 3;
/*	float c = float a / b; */

	printf("a + b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("a * b = %d\n", a * b);
	printf("a / b = %f\n", (float) a / b );
	printf("a %% b = %d\n", a % b);
	printf("a == b = %d\n", a == b);
	printf("a > b = %d\n", a > b);
	return 0;
}

