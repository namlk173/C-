#include<stdio.h>
int main(){
	int n, a, b, i, j;
	scanf("%d", &n);
	long long min_i = 99999999, min_j = 99999999;
	while(n--){
		scanf("%d %d", &a, &b);
		min_i = min_i>a?a:min_i;
		min_j = min_j>b?b:min_j;
	}
	printf("%lld\n", min_i*min_j);
	return 0;
}
