#include<stdio.h>

int main(){
	float a, b, c;
	
	printf("Moi ban nhap vao 3 canh cua tam giac");
	scanf("%f %f %f", &a, &b, &c);
	
	if(a > 0 && b > 0 && c > 0&& a + b > 0 && a + c > 0 && b + c >0){
		printf("La 3 canh cua tam giac.\n");
	} else {
		printf("Khong phai 3 canh cua tam giac.\n");
	}
	return 0;
}
