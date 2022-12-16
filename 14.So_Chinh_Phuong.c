#include <stdio.h>
#include <math.h>
int main(){
	int n, t;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		if((int)sqrt(n)*(int)sqrt(n)==n){
			printf("YES\n", sqrt(n));
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
