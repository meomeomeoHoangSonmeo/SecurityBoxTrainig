#include<stdio.h>
#include<math.h>
/* Vi?t chuong tr�nh in ra m�n h�nh
 tam gi�c c�n d?c c� d? cao h (h nh?p t? b�n ph�m). */
 
 void TinhToan(int ChieuCao){
 	int Dong;
 	int SoCach;
 	int SoSao;

 		printf("ham TinhToan chieu cao ban nhap la %d \n",ChieuCao);
 	for(Dong=1; Dong <= ChieuCao; Dong++){
	 
 		
		for(SoCach=0; SoCach< ChieuCao-Dong ; SoCach++){
			printf(" ");
		}
		for(SoSao=1; SoSao<= Dong+(Dong-1); SoSao++){
			printf("*");
		}
		printf("\n");
   }
 }
 
 void nhap(){
 	printf("BTT1_4\n");
 	printf("moi nhap chieu cao cua hinh tam giac \n");
    int ChieuCao;
	scanf("%d", & ChieuCao);
	printf("chieu cao ban nhap la %d\n",ChieuCao);
	
	TinhToan(ChieuCao);
	

 }
 
int main(){
 	nhap();
 	return 0;
 }
