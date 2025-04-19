//Bai 6.1
#include <stdio.h>
int main () {
    int a, b;
    printf("Nhap a:");
    scanf("%d", &a);
    printf("Nhap b:");
    scanf("%d", &b);
    
    //UCLN
    int ucln;
    if (a > b)
    {
        for (int i = 1; i <= b; i++)
        {
            if ((b % i == 0) && (a % i == 0))
            {
                ucln = i;
            }
        }
    }
    if (a < b) 
    {
        for (int i = 0; i <= a; i++)
        {
            if ((b % i == 0) && (a % i == 0))
            {
                ucln = i;
            }
        }
    }
    printf("UCLN: %d\n", ucln);

    ///BCNN
    int bcnn;
    if (a > b) {    
        for (int i = a*b; i >= a; i--)
        {
            if ((i % a == 0) && (i % b == 0))
            {
                bcnn = i;
            }
        }
    }
    if (a < b) {    
        for (int i = a*b; i >= b; i--)
        {
            if ((i % a == 0) && (i % b == 0))
            {
                bcnn = i;
            }
        }
    }
    printf("BCNN:%d\n", bcnn);
    return 0;
}