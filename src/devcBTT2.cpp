#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    main(){
	int a=0, b=0;
	char s[255];
	gets(s);
	

printf("%d", a);
	int n=strlen(s);
	for(int i=0;i<n;i++){
	
		if('a' <=s[i]&& s[i]<='z'){
		
		  a++;
		}
		if('A'<=s[i]&& s[i]<='Z'){
			b++;
		}
		
		
	}
	printf("viet thuong %d " , a);
	printf("viet thuong %d ", b);
	
}
