#include<stdio.h>
#include<math.h>
int snt(int n){
	if(n<2) return 0;
	int i, x = sqrt(n);
	for(i=2; i<=x; i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	long long n, i=0, j=2;
	scanf("%lld", &n);
	while(i<n){
		if(snt(j)){
			printf("%lld\n", j);
			i = i + 1;
		}
		j = j + 1;
	}
	return 0;
}
