#include<stdio.h>
void nhi_phan(int n){
	if(n==0) return;	
	nhi_phan(n/2);
	printf("%d", n%2);
}
int main(){
	int n;
	scanf("%d", &n);
	if(n==0) printf("0");
	else nhi_phan(n);
}
