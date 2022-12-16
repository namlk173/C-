#include<stdio.h>
#include<math.h>
int snt(int n){
	if(n<2) return 0;
	int i=2, x=sqrt(n);
	for(i; i<=x; i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t, i, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		int a[n];
		for(i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		for(i=0; i<n; i++){
			if(snt(a[i])) printf("%d ", a[i]);
		}
		printf("\n");
	}
	return 0;
}
