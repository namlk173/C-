#include<stdio.h>
int main(){
	char s[55];
	gets(s);
	int max = 0;
	int i, j, n = strlen(s);
	int a[n];
	for(i=0; i<n; i++){
		a[i] = 1; 
	}
	for(i=0; i<n; i++){
		for(j=0; j<i; j++){
			if(s[i]>s[j] && a[i]<=a[j]){
				a[i] = a[j] + 1;
			}
		}
	}  
	for(i=0; i<n; i++){
		max = max > a[i] ? max : a[i];
	}
	printf("%d", 26-max);
	return 0;
} 
