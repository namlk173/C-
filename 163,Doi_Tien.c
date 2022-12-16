#include<stdio.h>
int money_exchange(int n){
	int so_to = 0, i;
	int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	while(n!=0){
		for(i=9; i>=0; i--){
			int temp = n/a[i];
			so_to = so_to + temp;
			n = n - temp * a[i];
		}
	}
	return so_to;
}
int main(){
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		printf("%d\n", money_exchange(n));
	}
	return 0;
}
