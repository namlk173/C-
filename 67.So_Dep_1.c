#include<stdio.h>
#include<stdio.h>
int so_nguyen_to(int n){
	if(n<2) return 0;
	int i, x=sqrt(n);
	for(i=2; i<=x; i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int tong_chu_so(int n){
	int tong = 0;
	while(n!=0){
		tong = tong + n%10;
		n=n/10;
	} 
	if(find_in_array(tong)) return 1;
	return 0;
}

int find_in_array(int x){
	int i;
	int arr[50];
	arr[0] = 0;
	arr[1] = 1;
	for(i=2;i<50;i++){
		arr[i] = arr[i-1] + arr[i-2];
	}
	for(i=0; i<50; i++){
		if(x==arr[i]) return 1;
	}
	return 0;
} 
int main(){
	int a, b, i;
	scanf("%d %d", &a, &b);
	int start = a>b?b:a;
	int end = a>b?a:b;
	for(i=start; i<=end; i++){
		if(so_nguyen_to(i)&&tong_chu_so(i)) printf("%d ", i);
	}
	return 0;
}
