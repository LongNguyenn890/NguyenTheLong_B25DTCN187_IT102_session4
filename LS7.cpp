#include<stdio.h>
int main(){
	int n;
	printf("Nhap so nguyen dai dien cho nam: ");
	scanf("%d", &n);
	if(n % 4 == 0 && n % 100 != 0 || n % 400 == 0) {
		printf("Nam %d la nam nhuan", n);
	}
	else {
		printf("Nam %d khong phai la nam nhuan", n);
	}
	return 0;
}
