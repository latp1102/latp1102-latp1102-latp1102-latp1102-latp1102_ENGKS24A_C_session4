#include<stdio.h>

int main(){
	// khai bao int 
	int n;
	
	// Nhap tu ban phim
	printf("Moi ban nhap vao 1 so nguyen ");
	scanf("%d",&n);
	// Kiem tra so duong hay so am
	if(n > 0){
		printf("So la so duong ");
	} else {
		printf("So la so am ");
	}
	return 0;
	
	
}
