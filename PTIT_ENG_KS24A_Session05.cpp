#include <stdio.h>
#include <stdlib.h>
int main(){
	//1. In ra cac so chan trong khoang 1-100
	printf("Cac so chan trong khoang 1-100 la:\n");
	for(int i=1;i<=100;i++){
		if(i%2==0){
			printf("%d\t",i);
		}
	}
	printf("\n");
	//2. Su dung vong for tim diem trung binh trong khoang 0-10
	int m , n;
	for(m=0,n=10;m<n;m++,n--){		
	}
	printf("Diem trung binh khoang 0-10 la: %d\n",m);
	//3. Tinh tong cac so nhap vao, nhap den khi nhap 0
	int loopValue = 1;
	int sumNumber = 0;
	while(loopValue!=0){
		printf("Nhap vao mot so nguyen:");		
		scanf("%d",&loopValue);
		sumNumber+=loopValue;
	}
	printf("Tong cac so vua nhap la: %d\n",sumNumber);
	//4. Vong lap vo han
//	int loopIndex = 1;
//	while(loopIndex!=0){
//		printf("Vong lap thu %d \n",loopIndex);
//	}

	//jumps
	for(int i = 0; i<5; i++){
		if(i==2){
			continue;
		}
		printf("%d\t",i);
	}
	printf("\n");
	
	//5. In ra menu an sang cua sinh vien
	/*
		************MENU*************
		1. Pho bo kobe
		2. Pho ga Viet Nam
		3. Xoi trung thit
		4. Banh my pate
		5. My tom khong nguoi lai
		6. Thoat
		Lua chon cua ban: 1 --> choice
		--> do...while (vô han)
		--> switch
	*/
	int choice;
	do{
		printf("\n************MENU**************");
		printf("\n1. Pho bo kobe");
		printf("\n2. Pho ga Viet Nam");
		printf("\n3. Xoi trung thit");
		printf("\n4. Banh my pate");
		printf("\n5. My tom khong nguoi lai");
		printf("\n6. Thoat");
		printf("\nLua chon cua ban:");		
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("\nBan vua chon pho bo kobe");
				break;
			case 2:
				printf("\nBan vua chon pho ga Viet Nam");
				break;
			case 3:
				printf("\nBan vua chon Xoi trung thit");
				break;
			case 4:
				printf("\nBan vua chon Banh my pate");
				break;
			case 5:
				printf("\nBan vua chon My tom khong nguoi lai");
				break;
			case 6:
				exit(0);		
			default:
				printf("Vui long chon tu 1-6");
		}
	}while(1);
	
	
	
	
	
	
	
	
}
