#include<stdio.h>
int snt(int n){
	if(n<2) return 0;
	int i, x=sqrt(n);
	for(i=2; i<=x; i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int n, i;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		if(snt(i)) printf("%d\n", i);
	}
	return 0;
}
