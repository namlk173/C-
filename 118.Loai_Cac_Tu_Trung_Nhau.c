#include<stdio.h>
#include<string.h>

int main(){
	string s[100];
	char str[105];
	gets(str);
	char *token = strtok(str, " ");
	int n = 0; 
	while(token!=NULL){
		s[n] = token;
		n = n + 1;
		token = strtok(NULL, " ");
	}
	for(i=0; i<n-1; i++){
		printf("%s ", s[i]);
	}
	
	return 0;
}
