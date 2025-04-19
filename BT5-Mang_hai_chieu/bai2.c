#include <stdio.h>
#include <stdlib.h>
int main () {
    int i,j;
    printf("Nhap so hang cho array:");
    scanf("%d", &i);
    printf("Nhap so cot cho array:");
    scanf("%d", &j);
    if ((i <= 0) && (j <= 0))
    {
        printf("Khong hop le\n");
        exit(0);
    }
    
    int arr1[i][j];
    int arr2[i][j];

    //arr1
    for (int k = 0; k < i; k++)
    {
        for (int f = 0; f < j; f++)
        {
            printf("arr1[%d][%d]=", k+1, f+1);
            scanf("%d", &arr1[k][f]);
        }
    }
    //arr2
    printf("------------\n");
    for (int k = 0; k < i; k++)
    {
        for (int f = 0; f < j; f++)
        {
            printf("arr2[%d][%d]=", k+1, f+1);
            scanf("%d", &arr2[k][f]);
        }
    }
    //sum of 2 arrays
    printf("-----------\n");
    printf("Tong 2 array:\n");
    for (int k = 0; k < i; k++)
    {
        for (int f = 0; f < j; f++)
        {
            printf("%d ", arr1[k][f] + arr2[k][f]);
        }
        printf("\n");
    }
    
    return 0;
}