#include<stdio.h>
int tong_chu_so(int n){
	int tong = 0;
	while(n!=0){
		tong = tong + (n%10);
		n = n/10;
	}
	return tong;
}
int tong_thua_so(int n){
	int tong = 0, i=2;
	while(n!=1){
		while(n%i==0){
			tong = tong + tong_chu_so(i);
			n = n/i;
		}
		i = i + 1;
	}
	return tong;
}

int main(){
	int n;
	scanf("%d", &n);
	if(tong_chu_so(n)==tong_thua_so(n)) printf("YES");
	else printf("NO");
	return 0;
}
