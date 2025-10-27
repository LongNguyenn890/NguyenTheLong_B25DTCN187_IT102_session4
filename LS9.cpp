#include<stdio.h>
int main() {
	int day, month, year;
	printf("Nhap ngay thang nam: ");
	scanf("%d %d %d", &day, &month, &year);
	if (month < 1 || month > 12) {
		printf("Ngay thang nam khong hop le");
		return 0;
	}
	int so_ngay;
	switch (month) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			so_ngay = 31;
		break;
		case 4: case 6: case 9: case 11:
		 	so_ngay = 30;
		break;
		case 2:
			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) 
				so_ngay = 29;
			else 
				so_ngay = 28;
	}
	if (day < 1 || day > so_ngay) {
		printf("Ngay thang nam khong hop le \n");
	}
	else {
		printf("Ngay thang nam hop le");
	}
	return 0;
}
