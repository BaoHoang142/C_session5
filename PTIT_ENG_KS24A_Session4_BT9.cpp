//Nhap vao ngay thang nam, kiem tra dung ngay thang nam khong?
//--> Dung in ra
#include <stdio.h>
int main(){
	//B1. Nhap ngay thang nam
	int day, month, year;
	printf("Nhap vao ngay thang nam:");
	scanf("%d %d %d",&day,&month,&year);
	//B2. Kiem tra nam (>2000)
	if(year>2000){
		//B3. Kiem tra thang (1<=thang<=12)
		//B4. Kiem tra ngay (1-3-5-7-8-10-12: 1-31 ngay, 4-6-9-11: 1-30 ngay, 2: 1-28|| 1-29ngay )
		int flagDay = 0;//Ngay khong hop le
		switch(month){
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if(day>=1 && day<=31){
					flagDay = 1;
				}
				break;
			case 2:
				//Kiem tra nam nhuan
				if((year %4 == 0 && year % 100!=0) || (year % 400 == 0)){
					if(day>=1 && day<=29){
						flagDay = 1;
					}
				}else{
					if(day>=1 && day<=28){
						flagDay = 1;
					}
				}
				break;						
			case 4:						
			case 6:						
			case 9:						
			case 11:
				if(day>=1&&day<=30){
					flagDay = 1;
				}
				break;			
			default:
				printf("Thang khong hop le!!!");
		}
		//flagDay = 0: khong hop le , flagDay = 1: Hop le
		if(flagDay){
			printf("Ngay vua nhap la: %d/%d/%d\n",day,month,year);
		}else{
			printf("Ngay khong hop le!!!");
		}
		
	}else{
		printf("Nam khong hop le!!!");
	}

	
	//B5: in ra ngay/thang/nam
}
