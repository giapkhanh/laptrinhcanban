#include <stdio.h>
#include <math.h>
float giaithua_n(float n) {
    float gt = 1;
    for (float i = 1; i <= n; i++)
    {
        gt *= i;
    }
    return gt;
}

int main () {
	float x, sin,eps, n;
	printf("Nhap x:");
	scanf("%f", &x);
	printf("Nhap eps:");
	scanf("%f", &eps);
	n = 0;
	sin = 0;
	while ((pow(x, 2*n+1) / (giaithua_n(2*n+1))) > eps) {
		sin += (float) ((pow(-1, n) * pow(x, 2*n+1)) / (giaithua_n(2*n+1)));
		n++;
	}
	printf("Sin(%f)=%f",x, sin);
}