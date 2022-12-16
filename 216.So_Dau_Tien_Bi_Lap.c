#include<stdio.h>
int check(int a[], int n){
	int i, j;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(a[i]==a[j]) return a[i];
		}
	}
	return -1703;
}
int main(){
	int t, i;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		for(i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		if(check(a, n)==-1703) printf("NO\n");
		else {
			printf("%d\n", check(a,n));
		}
	}
	return 0;
}
