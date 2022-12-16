#include<stdio.h>
int main(){
	int i, j, result=0, n, m, k;
	scanf("%d\n%d\n%d", &n, &m, &k);
	int mark[n];
	for(i=0; i<n; i++){
		mark[i] = 0;
	}
	while(m--){
		int index;
		scanf("%d", &index);
		for(i=index-k-1; i<=index+k-1; i++){
			if(i>=0 && i<n){
				mark[i] = 1;
			}
		}
	}
	for(i=0; i<n; i++){
		if(mark[i]==0){
			int x = 0;
			for(j=i; j<n; j++){
				if(mark[j]!=0){
					break;
				}
				else{
					x = x + 1;
				}
			}
			i = j;
			result = result + (x+2*k)/(2*k+1); 
		}
	}
	printf("%d\n", result);
	return 0;
}
