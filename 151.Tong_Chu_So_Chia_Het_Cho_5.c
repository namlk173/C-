#include<stdio.h>
#include<math.h>

int so_nguyen_to(int n){
	if(n<2) return 0;
	int i, x=sqrt(n);
	for(i=2; i<=x; i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int chia_het_cho_5(int n){
	int tong = 0;
	while(n!=0){
		tong = tong + (n%10);
		n = n/10;
	}	
	if(tong%5==0) return 1;
	return 0;
}

int main(){
	int n, dem=0, i;
	scanf("%d", &n);
	for(i=2; i<n; i++){
		if(so_nguyen_to(i)&&chia_het_cho_5(i)){
			dem = dem + 1;
			printf("%d ", i);
		}
	}
	printf("\n%d", dem);
	return 0;
}
