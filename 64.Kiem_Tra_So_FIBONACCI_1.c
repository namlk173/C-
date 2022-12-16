#include<stdio.h>
int find_in_array(int n, int a[], int x){
	int i;
	for(i=0; i<n; i++){
		if(a[i]==x) return 1;
	}
	return 0;
}
int main(){
	int n;
	scanf("%d", &n);
	int a[80], i;
	a[0] = 1;
	a[1] = 1;
	for(i=2; i<80; i++){
		a[i] = a[i-1] + a[i-2]; 
	}
	printf("%d", find_in_array(80, a, n));
	return 0;
}
