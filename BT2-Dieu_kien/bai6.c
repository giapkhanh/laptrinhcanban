//Bai 6
#include <stdio.h>
#include <math.h>

int main () {

	int a,b,c,d,e,f;
	printf("Nhap a:");
	scanf("%d", &a);
	printf("Nhap b:");
	scanf("%d", &b);
	printf("Nhap c:");
	scanf("%d", &c);
	printf("Nhap d:");
	scanf("%d", &d);
	printf("Nhap e:");
	scanf("%d", &e);
	printf("Nhap f:");
	scanf("%d", &f);

	if  (((a==0) && (b==0) && (c != 0)) || ((d==0) && (e==0) && (f != 0))) {
		printf("He pt vo nghiem\n");
	}

	else if (((a==0) && (b==0) && (c == 0)) || ((d==0) && (e==0) && (f == 0))) {
		printf("He pt co vo so nghiem\n");
	}
	else {
		printf("x=%f\n", c*e-f*b);
		printf("y=%f\n", a*f-d*c);
	}
	return 0;
}