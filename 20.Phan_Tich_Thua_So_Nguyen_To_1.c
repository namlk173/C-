#include <stdio.h>
int snt(int n){
	int i, x = sqrt(n);
	if(n<2) return 0;
	for(i=2; i<=x; i++){
		if(n%i==0) return 0;
	}
	return 1;
}

void phantich(int n){
	if(snt(n)==1){
		printf("%d", n);
	}
	else{
		int i=2;
		while(n!=1){
			while(n%i==0){
				printf("%d ", i);
				n = n/i;
			}
			i = i + 1;
		}
	}
}
int main(){
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		phantich(n);
		printf("\n");
	}
	return 0;
}
