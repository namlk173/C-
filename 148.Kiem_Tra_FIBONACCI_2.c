#include<stdio.h>
int find_index(long long a[], int n, long x){
	int i;
	for(i=0; i<n; i++){
		if(x==a[i]) return 1;
	}
	return 0;
}
int main(){
	int t, i;
	scanf("%d", &t);
	long long a[100];
	a[0] = 0;
	a[1] = 1;
	for(i=2; i<100; i++){
		a[i] = a[i-1] + a[i-2];
	}
	long long n;
	while(t--){
		scanf("%lld", &n);
		if(find_index(a, 100, n)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
