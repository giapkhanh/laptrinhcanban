#include <stdio.h>
#include <math.h>

int main () {
    float gdp_2014, sp;
    printf("Nhap GDP 2014:");
    scanf("%f", &gdp_2014);
    printf("Toc do tang truong:");
    scanf("%f", &sp);
    float gdp;
    int nam = 2014;
    printf("%d - %f\n",nam, gdp_2014);
    while (gdp < 2*gdp_2014) {
        gdp = (float) (gdp + gdp_2014 * (sp / 100));
        nam++;
        printf("%d - %f\n",nam, gdp);
    }
}