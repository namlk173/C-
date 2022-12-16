#include<stdio.h>
#include<math.h>
int so_khong_giam(int n){
	while(n!=0){
		if(n%10<(n/10)%10) return 0;
		n = n/10;
	}
	return 1;
}
void in(int n){
	int start = pow(10, n-1);
	int end = pow(10, n) - 1;
	int i;
	for(i=start; i<=end; i++){
		if(so_khong_giam(i)) printf("%d ", i);
	}
}
int main(){
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		in(n);
		printf("\n");
	}
	return 0;
}
