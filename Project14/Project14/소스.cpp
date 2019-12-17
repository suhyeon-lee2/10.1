#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double x = 2.78, y = 8.42, z = 7.82;
	printf("%9u %9u %9u\n", &x, &y, &z);
	printf("%9f %9f %9f\n", x, y, z);

	double *p = &z;
	printf("%9f %9f %9f\n", *(p+4) ,*(p+2), *p);
}