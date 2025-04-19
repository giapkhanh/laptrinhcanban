//Bai 10
#include <stdio.h>

int main () {
	int n;
	printf("nhap n:");
	scanf("%d", &n);
	int s1, s2;
	s2 = 1;
	s1 = 1;
	printf("%d %d ", s1, s2);
	for (int i = 1; i <= n; i++) {
		int trunggian = s2;
		s2 = s1 + s2;
		printf("%d ", s2);
		s1 = trunggian;
	}
	return 0;
}