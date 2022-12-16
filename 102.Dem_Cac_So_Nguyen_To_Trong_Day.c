#include<stdio.h>
#include<math.h>
int songuyento(int n){
	if(n<2) return 0;
	int i, x=sqrt(n);
	for(i=2; i<=x; i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t, i, j, k;
	scanf("%d", &t);
	for(i=0; i<t; i++){
		
		int n;
		scanf("%d", &n);
		int a[n], mark[n];
		for(j=0; j<n; j++){
			scanf("%d", &a[j]);
			mark[j] = 1;
		}
		for(j=0; j<n-1; j++){
			for(k=j+1; k<n; k++){
				if(a[j]>a[k]){
					int temp = a[j];
					a[j] = a[k];
					a[k] = temp;
				}
			}
		}
		for(j=0; j<n-1; j++){
			for(k=j+1; k<n; k++){
				if(a[j]==a[k] && mark[j]!=-1){
					mark[j] = mark[j] + 1;
					mark[k] = -1;
				}
			}
		}
		printf("Test %d:\n", i+1);
		for(j=0; j<n; j++){
			if(mark[j]!=-1 && songuyento(a[j])){
				printf("%d xuat hien %d lan\n", a[j], mark[j]);
			}
			
		}
	}
	return 0;
}
