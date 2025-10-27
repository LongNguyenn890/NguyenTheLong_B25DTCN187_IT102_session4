#include<stdio.h>
int main() {
	int nam_sinh;
	const int hien_tai = 2025;
	float diem_trung_binh;
	printf("Nhap nam sinh: ");
	scanf("%d",&nam_sinh);
	printf("Nhap diem trung binh: ");
	scanf("%f",&diem_trung_binh);
	if ( nam_sinh >= 1900 && nam_sinh <= hien_tai) {
		int tuoi;
		tuoi = hien_tai - nam_sinh;
		if (tuoi>=18) {
			printf("Tuoi %d \n",tuoi);
		}
		else {
			printf("sinh vien chua du 18 tuoi");
			return 0;
		}
		if (diem_trung_binh >=8.0) {
			printf("Hoc luc: Gioi");
		}
		else if (diem_trung_binh<8) {
			printf("Hoc luc: Kha");
		}
		else if (diem_trung_binh<6.5) {
			printf("Hoc luc: Trung binh");
		}
		else {
			printf("Hoc luc: Yeu");
		}
	}
	else {
		printf("Nam sinh khong hop le");
	}
	return 0;
}
