#include<stdio.h>

int perfect_number(char number[]){
	int n = strlen(number), i;
	if(number[0]!='8' && number[n-1]!='8') return 0;
	long long tong = 0;
	for(i=0; i<n; i++){
		if(number[i] != number[n-i-1]) return 0;
		else tong = tong + (number[i]-'0');
	}
	if(tong%10!=0) return 0;
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
