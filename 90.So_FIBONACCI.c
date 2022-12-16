#include<stdio.h>
#include<math.h>

int main(){
	int t, n, i;
	long long fibo[93];
	fibo[0] = 1;
	fibo[1] = 1;
	for(i=2; i<93; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}	
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		printf("%lld\n", fibo[n-1]);
	}
	return 0;
}
