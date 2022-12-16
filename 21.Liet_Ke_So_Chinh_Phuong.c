#include <stdio.h>
#include <math.h>
int main(){
	long long m, n, i;
	scanf("%lld %lld", &m, &n);
	long long start = ceil(sqrt(m));
	long long end = (long long)sqrt(n);
	printf("%lld\n", end-start+1);
	for(i=start; i<=end; i++){
		printf("%lld\n", i*i);
	}
	return 0;
}
