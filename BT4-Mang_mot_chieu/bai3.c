#include <stdio.h>
#include <string.h>
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
    float pos_aver = 0;
    float neg_aver = 0;
    float aver = 0;
    //aver
    for (int i = 0; i < n; i++)
    {
        aver += arr[i];
    }
    aver = (float) (aver / n);
    //pos_aver
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            pos_aver = (float) pos_aver + arr[i];
            t++;
        }
    }
    pos_aver = (float) (pos_aver / t);
    //neg_aver
    t = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            neg_aver = (float) neg_aver + arr[i];
            t++;
        }
    }
    neg_aver = (float) neg_aver / t;
    printf("Trung binh cong:%f\n", aver);
    printf("Trung binh cong duong:%f\n", pos_aver);
    printf("Trung binh cong am:%f\n", neg_aver);
    
    return 0;
}