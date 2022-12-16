#include<stdio.h>
#include<math.h>

int _count_result(long long n){
	int x=sqrt(n), i, count=0;
	for(i=1; i<=x; i++){
		if(n%i==0){
			if(i%2==0){
				count = count + 1;	
			}
			if((n/i)%2==0 && (n/i)!=i){
				count = count + 1;
			}
		}
	}
	return count;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		printf("%d\n", _count_result(n));
	}
	return 0;
}
