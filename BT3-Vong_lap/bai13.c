#include <stdio.h>
#include <math.h>
float giaithua_n(float n) {
    float gt = 1;
    for (float i=1; i<=n; i++) {
        gt *= i;
    }
    return gt;
}
int main () {
    float x, n, eps;
    float e_x = 0;
    printf("Chuong trinh tinh e^x:\n");
    printf("Nhap x:");
    scanf("%f", &x);
    printf("Nhap eps:");
    scanf("%f", &eps);
    while ((pow(x, n) / giaithua_n(n)) > eps) {
        e_x += pow(x, n) / giaithua_n(n);
        n++;
    }
    printf("e^x:=%f", e_x);
}