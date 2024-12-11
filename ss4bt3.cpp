#include<stdio.h>
int main(){
	int a, total;
	printf("moi ban nhap so: ");
	scanf("%d",&a);
	if(a%3==0 && a%5==0){
		printf("so cua ban chia het cho 3 va chi het cho 5");
	}else if(a%3!=0 && a%5==0){
		printf("so cua ban chia het cho 5 va khong chi het cho 3");
	}else if(a%3==0 && a%5!=0){
		printf("so cua ban chia het cho 3 va khong chi het cho 5");	
	}else{
		printf("so cua ban khong chia duoc cho 3 va 5");
	}
	return 0;
}
