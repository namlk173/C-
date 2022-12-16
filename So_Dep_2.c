#include<stdio.h>
int sothuannghich(int n){
	int temp = n, tong = 0;
	while(temp!=0){
		tong = tong * 10 + (temp%10);
		temp = temp /10;
	}
	return (tong==n);
}
int chiahetcho10(int n){
	int tong = 0;
	while(n!=0){
		tong = tong + (n%10);
		n = n /10;
	}
	return (tong%10==0);
}
int main(){
	int t, n, i;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		int start = pow(10, n-1);
		int end = pow(10, n);
		int dem = 0;
		for(i=start; i<end; i++){
			if(sothuannghich(i)&&chiahetcho10(i)) dem = dem + 1;
		}
		printf("%d\n", dem);
	}
	return 0;
}
