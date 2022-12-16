#include<stdio.h>
long long ucln(long long a, long long b){
	long long temp;
	while(a!=0){	
		temp = a;
		a = b%a;
		b = temp;
	}
	return b;
}

long long bcnn(long long a, long long b){
	return a/ucln(a,b)*b;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n, m, i;
		scanf("%lld%lld", &n, &m);
		long long res = 1;
		for(i=n; i<=m; i++){
			res = bcnn(res, i);
		}
		printf("%lld\n", res);
	}
	return 0;
}
