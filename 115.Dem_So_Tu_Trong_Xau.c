#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include<ctype.h> 
main(){ 
int t, i; 
	scanf("%d",&t); 
	getchar(); 
	while(t--){ 
		char s[1000]; 
		gets(s); 
		int dem=1; 
		for(i=0;i<strlen(s)-1;i++){ 
			if(s[i]==' '&&s[i+1]!=' ') dem++; 
		} 
	printf("%d\n",dem); 
	} 
}

