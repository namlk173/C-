#include<stdio.h>
int main(){
	int n, i;
	scanf("%d", &n);
	int a[n];
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	int largest = a[0];
	int second = a[0];
	for(i=0; i<n; i++){
		largest = a[i]>largest?a[i]:largest;
	}
	for(i=0; i<n; i++){
		if(second==largest){
			second = a[i];
		}
		if(a[i]>second && a[i]!= largest){
			second = a[i];
		}  
	}
	printf("%d %d\n", largest, second);
	return 0;
}
