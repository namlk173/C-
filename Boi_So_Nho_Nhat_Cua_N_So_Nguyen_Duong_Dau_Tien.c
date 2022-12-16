#include<stdio.h>
long long ucln(long long a, long long b){
	while(a!=0){
		long long temp = a;
		a = b%a;
		b = temp;
	}
	return b;
}

long long bcnn(long long a, long long b){
	return a/ucln(a,b)*b;
}
int main(){
	int t, n, i, m;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d", &n, &m);
		long long bscnn = 1;
		for(i=n; i<=m; i++){
			bscnn  = bcnn(bscnn, i);
		}
		printf("%lld\n", bscnn);
	}
	return 0;
}
