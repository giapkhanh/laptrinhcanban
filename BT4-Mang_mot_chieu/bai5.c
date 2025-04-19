#include <stdio.h>
#include <string.h>
int main () {
    int arr[] = {1,6,8,3,6,8,4,2,5,5,9,7,0,6,9};
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Nhap x:");
    int x;
    scanf("%d", &x);
    int times = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == x)
        {
            times += 1;
        }
    }
    printf("x xuat hien %d lan trong mang.", times);
    return 0;
}