#include <stdio.h>
int main () {
    int arr[] = {-1,-2,-8,-4,1,2,4,6,2,-22,-7};
    int length = sizeof(arr) / sizeof (arr[0]);
    for (int i = 0; i < length; i++)
    {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}