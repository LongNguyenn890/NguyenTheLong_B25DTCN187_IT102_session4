#include<stdio.h>
int main() {
	float SoDien, SoDienDauThang, SoDienCuoiThang, TienDien;
	printf("Nhap so dien dau thang (kWh): ");
	scanf("%f", &SoDienDauThang);
	printf("NHap so dien cuoi thang (kWh): ");
	scanf("%f", &SoDienCuoiThang);
	SoDien = SoDienCuoiThang - SoDienDauThang;
	if (0 <= SoDien && SoDien < 50) {
		TienDien = SoDien * 10000;
		printf("Tong tien dien la %.1f", TienDien);
	}
	else if ( SoDien < 100) {
		TienDien = SoDien * 15000;
		printf("Tong tien dien la %.1f", TienDien);
	}
	else if ( SoDien < 150) {
		TienDien = SoDien * 20000;
		printf("Tong tien dien la %.1f", TienDien);
	}
	else if ( SoDien < 200) {
		TienDien = SoDien * 25000;
		printf("Tong tien dien la %.1f", TienDien);
	}
	else {
		TienDien = SoDien * 30000;
		printf("Tong tien dien la %.1f", TienDien);	
	}
	return 0;
}
