#include<stdio.h>
#include<math.h>

int snt(long long n){
	if(n<2) return 0;
	long long i, x= sqrt(n);
	for(i=2; i<=x; i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long l, r, i;
		scanf("%lld %lld", &l, &r);
		int count = 0;
		long long end = sqrt(r);
		long long start = sqrt(l)*sqrt(l) == l ? sqrt(l): sqrt(l) + 1;
		for(i=start; i<=end; i++){
			if(snt(i)) count = count + 1;
 		}
 		printf("%d\n", count);
 	}
	return 0;
}
