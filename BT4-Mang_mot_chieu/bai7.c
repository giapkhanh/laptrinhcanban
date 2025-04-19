#include <stdio.h>

int main () {

    //input
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
    //sort
    for (int i = 0; i < n; i++) {
        int min = arr[i];
        for (int j = i; j < n; j++) {
            if (arr[j] < min) {
                int tg = arr[j];
                arr[j] = min;
                min = tg;
            }            
        }
        arr[i] = min;   
    }
    
    //printout
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}