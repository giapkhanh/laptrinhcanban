//Chua hoan thanh

#include <stdio.h>
int main () {
    int n;
    printf("Nhap n:\n");
    scanf("%d", &n);
    int arr[n*n];
    for (int i = 0; i < n*n; i++)
    {
        arr[i] = i+1;
    }

    for (int i = 0; i < n*n; i++)
    {
        if (i % n == 0) {
            printf("")
        }
    }
    
    
    return 0;
    
}