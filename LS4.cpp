#include<stdio.h>
int main(){
	int n;
	printf("Nhap mot so nguyen: ");
	scanf("%d", &n);
	if (n == 1 || n == 3 || n == 5 || n == 7 || n== 8 || n == 10 || n == 12) {
		printf("Thang %d co 31 ngay",n);
	}
	else if (n == 4 || n == 6 || n == 9 || n == 11) {
		printf("Thang %d co 30 ngay",n);
	}
	else if (n == 2) {
		printf("Thang %d co 28 hoac 29 ngay",n);
	}
	else {
		printf("Thang khong hop le");
	}
	return 0;
}
