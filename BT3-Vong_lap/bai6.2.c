#include <stdio.h>
int main () {
    int stn;
    int tonguoc = 0;
    printf("Nhap so tu nhien:");
    scanf("%d", &stn);
    for (int i = 1; i <= stn; i++)
    {
        if (stn % i == 0) {
            tonguoc += i;
        }
    }

    if ((stn > 0) && (tonguoc == 2*stn))
    {
        printf("Day la so hoan hao!\N");
    }
    return 0;
}
    
		