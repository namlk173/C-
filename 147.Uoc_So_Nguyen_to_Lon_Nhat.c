#include<stdio.h>
#include<math.h>

int snt(long long n){
	if(n<2) return 0;
	int i, x=sqrt(n);
	for(i=2; i<=x; i++){
		if(n%i==0) return 0;
	}
	return 1;
}
long long find_result(long long n){
	long long x=sqrt(n), i;
	long long result = 0;
	for(i=1; i<=x; i++){
		if(n%i==0){
			if(snt(n/i)) return n/i;
			if(snt(i)) result=i;
		}
	}
	return result;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		printf("%lld\n", find_result(n));
	}
	return 0;
}
