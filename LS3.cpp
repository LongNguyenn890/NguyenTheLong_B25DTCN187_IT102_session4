#include<stdio.h>
int main() {
	int n;
	printf("Nhap so nguyen: ");
	scanf("%d", &n);
	if (n % 3 == 0 && n % 5 == 0) {
		printf("so vua nhap chia het cho 3 va 5");
	}
	else if (n % 3 == 0) {
		printf("so vua nhap chia het cho 3");
	}
	else {
		printf("so vua nhap chia het cho 5");
	}
	return 0;
}
