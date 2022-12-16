#include<stdio.h>
int find(int a[], int n, int x){
	int i;
	for(i=0; i<n; i++){
		if(x==a[i]) return 1;
	}
	return 0;
}
int main(){
	int n, m, i, j;
	scanf("%d %d", &n, &m);
	int a[n], b[m];
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<m; i++){
		scanf("%d", &b[i]);
	}
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(a[i]>a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(i=0; i<m-1; i++){
		for(j=i+1; j<m; j++){
			if(b[i]>b[j]){
				int temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}

	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(a[i]==a[j]){
				a[j] = -999999;
			}
			else{
				break;
			}
		}
	}
	for(i=0; i<m-1; i++){
		for(j=i+1; j<m; j++){
			if(b[i]==b[j]){
				b[j] = -999999;
			}
			else{
				break;
			}
		}
	}
	for(i=0; i<n; i++){
		if(find(b, m, a[i]) && a[i]!=-999999) printf("%d ", a[i]);
	}
	printf("\n");
	for(i=0; i<n; i++){
		if(!find(b, m, a[i]) && a[i]!=-999999) printf("%d ", a[i]);
	}
	printf("\n");
	for(i=0; i<m; i++){
		if(!find(a, n, b[i]) && b[i]!=-999999) printf("%d ", b[i]); 
	}
	printf("\n");
	return 0;
}
