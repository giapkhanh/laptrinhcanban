#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//Bai 9
float giaithua_n(n) {
    float gt = 1;
    for (float i = 1; i <= n; i++)
    {
        gt *= i;
    }
    return gt;
}
int main () {
    int stn_n;
    float tong_chuoi = 0;
    printf("Nhap so tu nhien n:");
    scanf("%d", &stn_n);
    for (int i = 1; i <= stn_n; i++)
    {
        tong_chuoi += (float) (1.0 / giaithua_n(i));
    }
    return 0;
}

