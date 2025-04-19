#include <stdio.h>

int main () {
    int n;
    printf("Nhap so phan tu cua mang:");
    scanf("%d", &n);
    
    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
        printf("\n");
    }
    //min 
    int min = arr[0];
    int min_idx = 0;
    for (int i = 1; i < n; i++)
    {
        if (min > arr[i]) {
            min = arr[i];
            min_idx = i;
        }
    }
    //max
    int max = arr[0];
    int max_idx = 0;
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i]) {
            max = arr[i];
            min_idx = i;
        }
    }
    printf("max cua mang la: arr[%d]=%d\n", max_idx, max);
    printf("min cua mang la: arr[%d]=%d\n", min_idx, min);


    return 0;
}