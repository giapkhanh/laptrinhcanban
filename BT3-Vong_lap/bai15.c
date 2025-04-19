#include <stdio.h>
#include <math.h>

int main () {
    float A, r;
    float n;
    printf("Nhap A (so tien goc):");
    scanf("%f", &A);
    printf("Nhap n (so thang):");
    scanf("%f", &n);
    r = (float) 0.45 / 100;
    float tienlai = A * pow((1+r), n);
    printf("%f", tienlai);
    return 0;
}