#include<stdio.h>
long long find_in_array(long long n, long long a[], long long x){
	long i;
	for(i=0; i<n; i++){
		if(a[i]==x) return 1;
	}
	return 0;
}
int main(){
	long long t;
	scanf("%lld", &t);
	long long a[100], i;
	a[0] = 0;
	a[1] = 1;
	for(i=2; i<100; i++){
		a[i] = a[i-1] + a[i-2]; 
	}
	while(t--){
		long long n;
		scanf("%lld", &n);
		
		if(find_in_array(100, a, n)) printf("YES\n");
		else printf("NO\n");
	}	
	return 0;
}
