/*
Vi?t chuong tr�nh nh?p v�o: ng�y, th�ng, nam (t? b�n ph�m). Ki?m tra xem ng�y
th�ng nam d� c� h?p l? hay kh�ng, n?u kh�ng � in ra m�n h�nh �Kh�ng h?p l?�, n?u c� �
cho bi?t nam d� c� ph?i nam nhu?n hay kh�ng?

*/
#include<stdio.h>
#include<math.h>
Cacular(int Day, int Month, int Year){
	int NamNhuan;
		if (Year%4==0 && Year%100!=0 || Year%400==0)
		{
			NamNhuan =1;
		}
		else
		{
			NamNhuan=0;
		}
	
    int CheckMonth=0;
    if(Month==1 || Month==3 ||Month==5||Month==7||Month==8||Month==10||Month==12){
		 if(Day<=31){
		 
		 CheckMonth =1;
     	}
	
		 if(Day>31){
		 
		 CheckMonth=0;
       } 
    }
	 
	if( Month==4 || Month==6 || Month==9 || Month==10 || Month==11){
		if(Day<=30){
		
		 	CheckMonth=1;
		}
		if(Day>30){
		
		 CheckMonth=0;
	    }
	}
	
	
	if(Month==2){
	     	if(Day<=29 && NamNhuan==1){
	     		CheckMonth =1;
			 }
			 if(Day <=28 && NamNhuan==0){
			 	CheckMonth=1;
			 }
		
		if((Day>29 )&&( NamNhuan==1||NamNhuan==0)){
	
		CheckMonth=0;
	    }
	}
	    
	 
		if(CheckMonth==0){
			printf("nhap sai cu phap \n");			
		}
	
		
		
		
		
		if(CheckMonth ==1 && NamNhuan == 1){
			printf("nam nhuan nhe \n");
		}
		if(CheckMonth ==1 && NamNhuan==0){
			printf("ko phai nam nhuan nhe \n");
		}
		
	
}


Input(){
	
	int Day, Month, Year;
printf("Input Day \n ")	;
scanf("%d", &Day);

printf("Input Month \n ");
scanf("%d", &Month);

printf("Input Year \n ");
scanf("%d", &Year);

printf("You input Day: %d, Month: %d, Year: %d", Day, Month,Year);
Cacular(Day, Month, Year);
}
main(){
	
	Input();
}



