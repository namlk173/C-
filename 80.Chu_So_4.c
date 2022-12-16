#include<stdio.h>
#include<math.h>
int tong_chia_het_cho_10(int n){
	int tong = 0;
	while(n!=0){
		tong = tong + n%10;
		n = n/10;
	}
	if(tong%10==0) return 1;
	return 0;
}

int so_thuan_nghich(int n){
	int dao_nguoc = 0;
	int temp = n;
	while(temp!=0){
		if((temp%10)==4) return 0;
		dao_nguoc = dao_nguoc*10 + temp%10;
		temp=temp/10; 
	}
	if(dao_nguoc==n) return 1;
	return 0;
}
void find_result(int n){
	int i;
	int start = pow(10,n-1);
	int end = pow(10, n) - 1;
	for(i=start; i<=end; i++){
		if(so_thuan_nghich(i) && tong_chia_het_cho_10(i)) printf("%d ", i);
	}
}
int main(){
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		find_result(n);
		printf("\n");
	}
	return 0;
}
