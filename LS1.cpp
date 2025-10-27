#include<stdio.h>
int main(){
	int n;
	printf("Nhap mot so nguyen: ");
	scanf("%d",&n);
	if(n>0) {
		printf("So vua nhap la so duong");
	}
	else if (n == 0) {
		printf("So va nhap khong phai so am cung khong phai so duong");
	}
	else {
		printf("So vua nhap la so am");
	}
	return 0;
}
