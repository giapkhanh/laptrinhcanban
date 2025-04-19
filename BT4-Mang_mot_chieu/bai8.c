#include <stdio.h>
int main () {
    int arr1[] = {2,5,7,10,11,12,13,14,15,19,20};
    int arr2[] = {1,3,4,6,8,9,21,24,26};

    int length1 = sizeof(arr1) / sizeof(arr1[0]);
    int length2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr[length1+length2];

    if (arr1[length1-1] <= arr2[0]) {
        printf("Mang da sap xep la: \n");
        for (int i = 0; i < length1; i++)
        {
            printf(" %d ", arr1[i]);
        }
        for (int i = 0; i < length2; i++)
        {
            printf(" %d ", arr2[i]);
        }
    }
    else if (arr2[length2-1] <= arr1[0]) {
        printf("Mang da sap xep la: \n");
        for (int i = 0; i < length2; i++)
        {
            printf(" %d ", arr2[i]);
        }
        for (int i = 0; i < length1; i++)
        {
            printf(" %d ", arr1[i]);
        }   
    }
    else {
        int indx_arr = 0;
        int indx_arr1 = 0;
        int indx_arr2 = 0;
        if (arr1[0] < arr2[0]) {
            for (int i = 0; i < length1; i++) {
                arr[indx_arr] = arr1[i];
                printf("index-i:%d\n", i);
                while (((indx_arr2 <= length2) && (arr1[i] < arr2[indx_arr2]) && (arr2[indx_arr2] < arr1[i+1])) || ((indx_arr2 <= length2) && (arr1[length1-1] < arr2[indx_arr2]) && (i == length1-1))) {
                    indx_arr++;
                    arr[indx_arr] = arr2[indx_arr2];
                    indx_arr2++;
                }
                indx_arr++;
            }
        }
        else if (arr2[0] < arr1[0]) {
            for (int i = 0; i < length2; i++) {
                arr[indx_arr] = arr2[i];
                while (((indx_arr1 <= length1) && (arr2[i] < arr1[indx_arr1]) && (arr1[indx_arr1] < arr2[i+1])) || ((indx_arr1 <= length1) && (arr2[length2-1] < arr1[indx_arr1]) && (i == length2-1))) {
                    indx_arr++;
                    arr[indx_arr] = arr1[indx_arr1];
                    indx_arr1++;
                }
                indx_arr++;
            }
        }
        //printout
        printf("Mang da sap xep la:\n");
        for (int k = 0; k < length1+length2; k++)
        {
            printf("%d ", arr[k]);
        }
    }
    return 0;
}