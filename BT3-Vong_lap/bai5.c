//Bai5
#include <stdio.h>
int main () {
    int n;
    printf("\n");
    printf("Nhap n:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0) {
            printf("Uoc cua %d: %i\n", n, i);
        }
    }
return 0;
}
