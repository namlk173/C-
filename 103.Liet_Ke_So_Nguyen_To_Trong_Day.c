#include<stdio.h>
int songuyento(int n){
	if(n<2) return 0;
	int x=sqrt(n), i;
	for(i=2; i<=x; i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int n, i;
	scanf("%d", &n);
	int a[n];
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	} 
	int dem = 0; 
	for(i=0; i<n; i++){
		if(songuyento(a[i])) dem = dem + 1;
	}
	printf("%d ", dem);
	for(i=0; i<n; i++){
		if(songuyento(a[i])) printf("%d ", a[i]);
	}
	return 0;
}
