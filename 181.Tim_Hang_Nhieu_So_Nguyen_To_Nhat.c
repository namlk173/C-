#include<stdio.h>
#include<math.h>

int snt(int n){
	if(n<2) return 0;
	int i, x =sqrt(n);
	for(i=2; i<=x; i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int n, i, j;
	scanf("%d", &n);
	int a[n][n];
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int _max=0, index=0;
	for(i=0; i<n; i++){
		int count = 0;
		for(j=0; j<n; j++){
			if(snt(a[i][j])) count = count + 1;
		}
		if(_max<count){
			_max=count;
			index = i;
		}
	}
	printf("%d\n", index+1);
	for(i=0; i<n; i++){
		if(snt(a[index][i])) printf("%d ", a[index][i]);
	} 
	return 0;
}
