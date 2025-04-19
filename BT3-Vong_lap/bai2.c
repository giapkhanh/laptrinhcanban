#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {

//Bai 2
    long long int int_num;
    printf("Nhap so tu nhien:");
    scanf("%lld", &int_num);
    if ((int_num % 2 == 0) || (int_num < 2))
    {
        printf("Day ko phai la so nguyen to!\n");
        exit(0);
    }
    

    for (long long int i = 3; i<int_num;i+=2) {
        if (int_num % i == 0)
        {
            printf("Day ko phai la so nguyen to!\n");
            exit(0);
        }
    }
    printf("Day la so nguyen to!\n");
}