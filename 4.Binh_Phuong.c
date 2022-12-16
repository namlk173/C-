#include <stdio.h>
int main(){
	long long n, t;
	scanf("%lld", &t);
	while(t--){
		scanf("%lld", &n);
		printf("%llu\n", n*n);
	}
	return 0;
}
