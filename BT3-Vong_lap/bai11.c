#include <stdio.h>
#include <math.h>
int main () {
	float n;
	printf("Nhap n:");
	scanf("%f", &n);
	float co_so;
	printf("Nhap co so:");
	scanf("%f", &co_so);
	float pow = (float) (log(n) / log(co_so));
	printf("Bieu dien duoi dang co so %f: %f^%f\n", co_so, co_so, pow);
	return 0;
}