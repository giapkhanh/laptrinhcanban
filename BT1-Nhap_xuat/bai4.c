//Bai 4
#include <stdio.h>
int main(){

	float r;
	printf("Nhap ban kinh cua hinh cau:");
	scanf("%f", &r);
	printf("Dien tich hinh cau: %f\n", 4*3.141592654*r*r);
	printf("The tich hinh cau: %f\n",(float) (4.0 / 3.0)*3.141592654*r*r*r);
	return 0;
}
