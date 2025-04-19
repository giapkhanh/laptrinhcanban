#include <stdio.h>
int main(){

	//Bai 3
	int a, b;
	printf("Nhap a:");
	scanf("%d", &a);
	printf("Nhap b:");
	scanf("%d",&b);
	
	printf("Day la phep cong: a+b = %d\n", a+b);
	printf("Day la phep tru: a-b = %d\n", a-b);
	printf("Day la phep nhan: a*b = %d\n", a*b);
	printf("Day la phep chia: a/b = %d\n", a/b);
	printf("Nhan xet: phep chia \'/\' chi lay phan nguyen cua phep chia\n");
	return 0;
}