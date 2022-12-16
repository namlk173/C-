#include<stdio.h>
#include<string.h>
int main(){
	char str[10000];
	gets(str);
	int alpha = 0, digit = 0, i, n=strlen(str);
	for(i=0; i<n; i++){
		if(isalpha(str[i])) alpha = alpha + 1;
		else if(isdigit(str[i])) digit = digit + 1;
	} 
	printf("%d %d %d", alpha, digit, n-alpha-digit);
	return 0;
}
