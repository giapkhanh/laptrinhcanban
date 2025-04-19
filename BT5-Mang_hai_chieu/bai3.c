#include <stdio.h>
int main () {
    int n, m, p;

    //Input
    printf("Nhap so hang cho arr1:");
    scanf("%d", &n);
    printf("Nhap so cot cho arr1 va so hang cho arr2 (cot arr1 = hang arr2):");
    scanf("%d", &m);
    printf("Nhap so cot cho arr2:");
    scanf("%d", &p);

    int arr1[n][m];
    int arr2[m][p];
    //arr1 input
    printf("Nhap gia tri cho arr1:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("arr1[%d][%d]=", i+1, j+1);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Nhap gia tri cho arr2:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("arr1[%d][%d]=", i+1, j+1);
            scanf("%d", &arr2[i][j]);
        }
    }
    
    int sohang_a1 = n;
    int so_cot_a1 = m;
    int so_hang_a2 = m;
    int socot_a2 = p;

    int kq=0;
    int times = 0;
    printf("\nMa tran arr1 * arr2:\n");
    for (int hang_a1 = 0; hang_a1 < sohang_a1; hang_a1++) {
        for (int cot_a2 = 0; cot_a2 < socot_a2; cot_a2++) {
        kq = 0;
        for (int stt_hang_a1 = 0, stt_hang_a2 = 0; stt_hang_a1 < so_cot_a1, stt_hang_a2 < so_hang_a2; stt_hang_a1++, stt_hang_a2++) {
            kq += arr1[hang_a1][stt_hang_a1] * arr2[stt_hang_a2][cot_a2];
        }
        printf("%d     ", kq);
        times++;
        if (times % socot_a2 == 0)
        {
            printf("\n");
        }
        
        }
    }
    return 0;
}