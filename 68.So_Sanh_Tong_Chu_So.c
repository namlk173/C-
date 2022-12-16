#include<stdio.h>
int tong_chu_so(int n){
	int tong = 0;
	while(n!=0){
		tong = tong + n%10;
		n = n/10;
	}
	return tong;
}
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(tong_chu_so(a)<=tong_chu_so(b)){
		printf("%d %d", a, b);
	}
	else{
		printf("%d %d", b, a);
	}
	return 0;
}
