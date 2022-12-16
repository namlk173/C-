#include <stdio.h>
int main(){
	long long a, b;
	scanf("%lld%lld", &a, &b);
	if(b==0){
		printf("0");
	}
	else{
		printf("%lld %lld %lld %0.2f %lld", a+b, a-b, a*b, (double)a/b, a%b);
	}
	return 0;
}
