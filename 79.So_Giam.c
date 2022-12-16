#include<stdio.h>
int so_giam(int n){
	while(n>=10){
		if(n%10>=(n/10)%10) return 0;
		n = n/10;
	}
	return 1;
}
int main(){
	int t, a, b, i;
	scanf("%d", &t);
	while(t--){
		int dem = 0;
		scanf("%d%d", &a, &b);
		for(i=a; i<=b; i++){
			if(so_giam(i)) dem = dem + 1;
		}
		printf("%d\n", dem);
	}
	return 0;
}
