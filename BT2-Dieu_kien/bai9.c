//Bai 9
#include <stdio.h>
#include <math.h>

int main () {

	int nam, thang;
	printf("Nhap nam:");
	scanf("%d", &nam);
	printf("Nhap thang:");
	scanf("%d", &thang);
	int i;
	int mon_31[] = {1,3,5,7,8,10,12};
	int m31_length = sizeof(mon_31) / sizeof(mon_31[0]);
	int mon_30[] = {4,6,9,11};
	int m30_length = sizeof(mon_30) / sizeof(mon_30[0]);
	for (i = 0; i < m31_length; i++)
	{
		if (thang == mon_31[i]) {
			printf("Thang co 31 ngay\n");
		}
	}
	for (i = 0; i < m30_length; i++)
	{
		if (thang == mon_30[i]) {
			printf("Thang co 30 ngay\n");
		}
	}
	if (thang == 2) {
		printf("Thang co 28 hoac 29 ngay\n");
	}
	return 0;
}