#include <stdio.h>
int main(){
	int a, b, i;
	scanf("%d%d", &a, &b);
	int max = a>b?a:b;
	int min = a<b?a:b;
	long long tong = 0;
	for(i=min; i<=max; i++){
		tong = tong + i;
	}
	printf("%lld", tong);
	return 0;
}
