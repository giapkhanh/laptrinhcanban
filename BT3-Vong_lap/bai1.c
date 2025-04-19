#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main () {
    //Bai 1
    int nums[10];
    char arr[19];
    int tong = 0;
    printf("Nhap 10 so:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Nhap so thu %d: ", i);
        scanf("%d", &nums[i]);
        tong+= nums[i];
    }
    printf("Tong la: %d\n", tong);
    

	return 0;
}