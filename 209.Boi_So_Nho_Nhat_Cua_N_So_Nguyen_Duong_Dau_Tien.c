#include<stdio.h>
long long ucln(long long a, long long b){
	while(a!=0){
		long long temp = a;
		a = b%a;
		b= temp;
	}
	return b;
}
long long bcnn(long long a, long long b){
	return a/ucln(a, b)*b;
}

int main(){
	int t, n;
	long long i;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		long long _bcnn = 1;
		for(i=1; i<=n; i++){
			_bcnn = bcnn(_bcnn, i);
		}
		printf("%lld\n", _bcnn);
	}
	return 0;
}
