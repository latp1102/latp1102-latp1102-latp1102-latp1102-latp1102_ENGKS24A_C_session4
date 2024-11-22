#include<stdio.h>

int main(){
	// Khai bao int
	int n;
	
	// Nhap tu ban phim
	printf("Moi ban nhap vao 1 so nguyen ");
	scanf("%d",&n);
	
	
	// KIerm tra xem co chia het cho 3, cho 5 khong hoac chi het cho ca 3 va 5
	if(n % 3 == 0 && n % 5 == 0){
		printf("So chia het cho ca 3 va 5 ");
	} else if (n % 3 == 0) {
		printf("So chia het cho 3 ");
	} else if (n % 5 == 0) {
		printf("So chi het cho 5 ");
	} else {
		printf("So khong chia het cho ca 3 va 5 ");
	}
	
			
	return 0;
}
