#include <stdio.h>
int main(){

	//Bai 2
	int ngay;
	int thang;
	int nam;
	printf("Bai2:\n");
	printf("Nhap ngay:");
	scanf("%d", &ngay);
	if (!(0 <= ngay <=31)) {
		printf("Ngay khong hop le!\n");
	}

	printf("Nhap thang:");
	scanf("%d", &thang);
	if (!(0 <= thang <= 12)) {
		printf("Thang khong hop le!\n");
	}
	
	printf("Nhap nam:");
	scanf("%d", &nam);
	if (!(0 <= nam)) {
		printf("Ngay khong hop le! Nam sinh phai gan day\n");
	}
	printf("Dinh dang dd/mm/yyyy:%d/%d/%d\n", ngay, thang, nam);
	return 0;
}
