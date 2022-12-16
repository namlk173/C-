#include<stdio.h>
int perfer_number(char number[]){
	int n = strlen(number), i;
	for(i=0; i<n; i++){
		if(number[i]!=number[n-i-1] || (number[i]-'0')%2!=0) return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char number[501];
		scanf("%s", &number);
		if(perfer_number(number)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
