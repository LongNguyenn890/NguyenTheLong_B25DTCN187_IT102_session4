#include<stdio.h>
int main(){
	int a,b,c;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("Nhap c: ");
	scanf("%d", &c);
	if (a + b > c && a + c > b && b + c > a) {
		printf("La 3 canh cua tam giac");
	}
	else {
		printf("Khong phai la 3 canh cua tam giac");
	}
	return 0;
}
