#include<stdio.h>
long long ton_lon_nhat(int a[], int n){
	int i, j;
	long long _max = a[0];
	for(i=0; i<n; i++){
		_max=_max>a[i]?_max:a[i];
	}
	long long sum = 0;
	for(i=0; i<n; i++){
		sum = sum + a[i];
		if(sum<0) sum=0;
		_max=_max>sum?_max:sum; 
	}
	return _max;
}
int main(){
	int t, i, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		int a[n];
		for(i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		printf("%lld\n", ton_lon_nhat(a,n));
	}
	return 0;
}
