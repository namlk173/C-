#include<stdio.h>

int perfect_number(char number[]){
	int n = strlen(number), i;
	for(i=0; i<n; i++){
		if(number[i] != number[n-i-1]) return 0;
		if(number[i]!='2' && number[i]!='3' && number[i]!='5' && number[i]!='7') 
			return 0;
	}
	
	return 1;	
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char number[501];
		scanf("%s", &number);
		if(perfect_number(number)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
} 
