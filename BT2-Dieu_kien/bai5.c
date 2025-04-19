#include <stdio.h>
#include <math.h>

int main () {
	//Bai 5
	int soa, sob, soc;
	printf("Nhap a:");
	scanf("%d", &soa);
	printf("Nhap b:");
	scanf("%d", &sob);
	printf("Nhap c:");
	scanf("%d", &soc);
	
	float delta = sob*sob - (4*soa*soc);
	if (delta < 0) {
		printf("Phuong trinh vo nghiem\n");
	}
	else if (delta > 0) {
		printf("x1=%f\n", (float) ((-sob - sqrt(delta)) / (2*soa)) );
		printf("x1=%f\n", (float) ((-sob + sqrt(delta)) / (2*soa)) );

	}
	else if (delta == 0) {
		printf("Phuong trinh co nghiem kep:x=%f\n", (float) -sob/(2*soa));
	}
	return 0;
}