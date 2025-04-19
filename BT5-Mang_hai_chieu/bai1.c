#include <stdio.h>
int main () {
    printf("Chon mang co san hay nhap vao tu ban phim:\n");
    printf("[1] - Co san\n");
    printf("[2] - nhap vao tu ban phim\n");
    int n;
    scanf("%d", &n);
    if (n == 1) {
        int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
        printf("Gia tri cua mang la:\n");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
    }
    else if (n == 2) {
        int arr[3][3];
        printf("Nhap mang:\n");
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("arr[%d][%d]=", i+1, j+1);
                scanf("%d", &arr[i][j]);
            }
            
        }
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}