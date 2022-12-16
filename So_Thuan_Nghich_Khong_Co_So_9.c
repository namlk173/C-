#include<stdio.h>
int sothuannghich(int n){
	long long temp = n, tong = 0;
	while(temp!=0){
		tong = tong * 10 + (temp%10);
		temp = temp /10;
	}
	return (tong==n);
}

int khong_chua_so_9(int n){
	while(n!=0){
		if(n%10==9){
			return 0;
		}
		n = n/10;
	}
	return 1;
}
int main(){
	int n, i;
	scanf("%d", &n);
	int dem = 0;
	for(i=2; i<n; i++){
		if(sothuannghich(i) && khong_chua_so_9(i)) 
		{
		printf("%d ", i);
		dem = dem + 1;
		}
	}
	printf("\n%d", dem);
	return 0;
}
