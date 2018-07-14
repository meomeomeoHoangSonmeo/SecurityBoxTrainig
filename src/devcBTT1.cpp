#include <stdio.h>
#include <stdlib.h>
 void tachso(int InputNumber){

    
    int mang[3];
	int temp;
    for(int n=0 ; n <3; n++){
        mang[n] = InputNumber%10;
        InputNumber = InputNumber/10;
        printf("cac chu so trong day la: %d \n",  mang[n] );
        printf("so sau khi chia vua nhap: %d \n" ,InputNumber);
    }
    printf("cac gia tri trong mang  %d %d %d \n " ,mang[0], mang[1] , mang[2]);
  /*	for(int i=0; i<2; i++){
     for(int j=i+1; j<3; j++){
         if(mang[j]<mang[i]){
            temp = mang[j];
            mang [j] = mang[i];
            mang[i] = temp;
         }
   }
  }*/
  // dung de sap xep (thuat toan noi bot)
  	for(int i=0; i<2; i++){
    	for(int j=0; j<2; j++){
        	if(mang[j]>mang[j+1]){
            temp = mang[j];
            mang [j] = mang[j+1];
            mang[j+1] = temp;
          	}
       	}   
   	}
  	for (int k =2; k>=0; k--){
   		printf("%d ",mang[k]);
	   }
}

int bt1() {

   int InputNumber;
   printf("moi nhap so co 3 chu so: ");
   scanf("%d",&InputNumber);
   if(99< InputNumber && InputNumber <1000){
        printf("vua nhap: %d \n" ,InputNumber);
        tachso(InputNumber);
   }
   else
     printf("chi nhap so co 3 chu so");
   return 0;
   }



main(){
	printf("BTT1_1 \n");
        bt1();


}






