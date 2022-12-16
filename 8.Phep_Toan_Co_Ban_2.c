#include <stdio.h>
int main(){
	long long a, b;
	scanf("%lld%lld", &a, &b);
	if(b==0){
		printf("0");
	}
	else{
		printf("%lld\n%lld\n%lld\n%lld\n%lld\n%0.2f\n", a+b, a-b, a*b, a/b, a%b, (double)a/b);
	}
	return 0;
}
