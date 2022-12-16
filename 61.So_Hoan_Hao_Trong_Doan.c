#include<stdio.h>
#include<math.h>
int perfect_number(int n){
	if(n<=2) return 0;
	int i, tong = 1;
	for(i=2; i<=sqrt(n); i++){
		if(n%i==0){
			tong = tong + i;
			if(n/i!=i && n%(n/i)==0){
				tong = tong + (n/i);
			}
		}
	}
	if(n!=tong)return 0;
	return 1;
}
int main(){
	int a, b, i;
	scanf("%d %d", &a, &b);
	int start = a>b?b:a;
	int end = a>b?a:b;
	for(i=start; i<=end; i++){
		if(perfect_number(i)) printf("%d ", i);
	}
	return 0;
}
