#include<stdio.h>
#include<math.h>
int snt(int n){
	int i, x = sqrt(n);
	if(n<2) return 0;
	for(i=2; i<=x; i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		if(snt(n)==1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
