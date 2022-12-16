#include<stdio.h>
int mang_doi_xung(int a[], int n){
	int i;
	for(i=0; i<n; i++){
		if(a[i]!=a[n-i-1]) return 0;
	}
	return 1;
}
int main(){
	int t, n, i;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		int a[n];
		for(i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		if(mang_doi_xung(a,n)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
