/*Vi?t chuong tr�nh d?o x�u. �?u v�o l� 1 x�u k� t? b?t k� 
(nh?p t? b�n ph�m),
 in ra m�n h�nh x�u d� d?o*/
 
#include<stdio.h>
#include<math.h>
#include <string.h> 



main(){
	printf("BTT1_8: BT DAO XAU \n");
	char String[1000];
	gets(String);
	
	int length= strlen(String);
	for(int n=length-1; n>=0; n--){
		
	printf("%c" ,String[n]);	
		
	}
	
	
	
}
