//Bai 7
#include <stdio.h>
#include <math.h>

int main () {

	float diem;
	printf("Nhap diem:");
	scanf("%f", &diem);
	if (diem < 5) {
		printf("Yeu\n");
	}
	else if ((diem >= 5) && (diem < 7)) {
		printf("Trung binh\n");
	}
	else if ((diem >= 7) && (diem < 8)) {
		printf("Kha\n");
	}
	else if ((diem >= 8) && (diem < 9)) {
		printf("Trung binh\n");
	}
	else if (diem >= 9) {
		printf("Trung binh\n");
	}
	return 0;
}