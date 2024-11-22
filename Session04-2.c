#include<stdio.h>

int main(){
	// khai bao
	int n;
	
	// Nhap vao tu ban phim
	printf("Moi ban nhap vao 1 so nguyen ");
	scanf("%d",&n);
	// Kiem tra so chan hay le
	if(n % 2 == 0){
		printf("So la so chan ");
	} else {
		printf("So la so le ");
	}
	return 0;
	
}
