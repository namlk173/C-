#include <stdio.h>
int main(){
	long long t, n;
	scanf("%lld", &t);
	while(t--){
		scanf("%lld", &n);
		printf("%.15f\n", (double)1/n);
	}
	return 0;
}
