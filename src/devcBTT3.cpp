#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void tinhtoantien(int SoDuongDi){
	int TongTien;
	printf("ham tinhtoantien %d\n " , SoDuongDi);

	if(0<SoDuongDi && SoDuongDi<=1000 ){
		TongTien=10000;
	}
	
	if(SoDuongDi=30000){
		TongTien=227500;
	}
	if(1000<SoDuongDi && SoDuongDi<=30000){
		TongTien= 10000+ (1500/200)*(SoDuongDi-1000);
	}
	if(SoDuongDi> 30000){
			TongTien=227500+ (8000/1000)*(SoDuongDi-30000);
		
	}
	
	printf("TongTien la %d" , TongTien);
	
}
nhapsoduong(){
	printf("moi nhap so m da di \n");
    int SoDuongDi;
	scanf("%d", & SoDuongDi);
	printf("so duong ban nhap la %d \n", SoDuongDi);
	tinhtoantien(SoDuongDi);
	
}

 main(){
	nhapsoduong();
}
