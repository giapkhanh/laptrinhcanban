#include <stdio.h>
#include <math.h>

int main () {

	int canha, canhb, canhc;
	printf("nhap a:");
	scanf("%d", &canha);
	printf("nhap b:");
	scanf("%d", &canhb);
	printf("nhap c:");
	scanf("%d", &canhc);
	
	if (!( ((canha+canhb) >= canhc) || ((canhb+canhc) >= canha) || ((canhc+canha) >= canhb) )) {
		printf("Khong phai la canh cua tam giac\n");
	}
	
	
	else {
		//vuong
		if ((canha*canha + canhb*canhb == canhc*canhc) || (canhb*canhb + canhc*canhc == canha*canha) || (canhc*canhc + canha*canha == canhb*canhb)) {
		printf("Tam giac vuong\n");
		}	
		//vuong can
		else if ( ((canha*canha + canhb*canhb == canhc*canhc) || (canhb*canhb + canhc*canhc == canha*canha) || (canhc*canhc + canha*canha == canhb*canhb)) && ( (canha==canhb) || (canhb==canhc) || (canhc==canha) )){
		printf("Tam giac vuong can\n");
		}
		//deu
		else if ((canha==canhb) && (canhb==canhc) && (canhc==canha)) {
		printf("Tam giac deu\n");
		}
		else {
			printf("Tam giac thuong\n");
		}

	}
	return 0;
}