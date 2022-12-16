#include<stdio.h>
#include<string.h>

int main(){
	char str[100000];
	scanf("%s", &str);
	int i=0, j, n = strlen(str);
	while(i<n){
		int k=i;
		for(j=i; j<n; j++){
			if(str[j]>=str[k]){
				k=j;		
			}
		}
		for(j=i; j<n; j++){
			if(str[j]==str[k]){
				printf("%c", str[j]);	
			}
		}
		i = k+1;
	}
	return 0;
}
