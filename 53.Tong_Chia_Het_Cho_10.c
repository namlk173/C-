#include<stdio.h>
int chia_het_cho_10(int n){
	int tong = 0; 
	while(n!=0){
		tong = tong + (n%10);
		n = n/10;
	}
	if(tong%10==0) return 1;
	return 0;
}
int main(){
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		if(chia_het_cho_10(n)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
