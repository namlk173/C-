#include<stdio.h>
#include<math.h>

int songuyento(long long n){
	if(n<2) return 0;
	int x = sqrt(n), i;
	for(i=2; i<=x; i++){
		if(n%i==0) return 0;
	}
	return 1;
} 
long long usnt_ln(long long n){
	int i;
	long long x;
	for(i=1; i<=sqrt(n); i++){
		if(n%i==0){
			if(songuyento(n/i)) return n/i;
			else if(songuyento(i)) x = i;
		}
	}
	return x;
}
int main(){
	int t;
	long long n;
	scanf("%d", &t);
	while(t--){
		scanf("%lld", &n);
		printf("%lld\n", usnt_ln(n));
	}
	return 0;
}
