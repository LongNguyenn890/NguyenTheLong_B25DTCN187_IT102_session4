#include<stdio.h>
int main () {
	int a,b,c;
	printf("Nhap 3 so nguyen: ");
	scanf("%d %d %d", &a, &b, &c);
	if ((a<c && c<b) || (a>c && c<b)) {
		printf("So thu 3 nam trong khoang giua so 1 va so 2");
	}
	else {
		printf("So thu 3 khong nam trong khoang giua so 1 va so 2");
	}
	return 0;
}




