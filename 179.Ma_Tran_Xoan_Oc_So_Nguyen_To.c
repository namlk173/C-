#include<stdio.h>
#include<math.h>

int so_nguyen_to(int n){
	if(n<2) return 0;
	int i, x=sqrt(n);
	for(i=2; i<=x; i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int t, test=1;
	scanf("%d", &t);
	while(t--){
	int n, i, j;
	scanf("%d", &n);
	int a[n][n];
	int snt[n*n];
	int temp = 2;
	for(i=0; i<n*n; i++){
		while(1){
			if(so_nguyen_to(temp)){
				break;
			}
			else{
				temp = temp + 1;
			}
		}
		snt[i] = temp;
		temp = temp + 1;
	}
	int x = 0;
	int start_index1 = 0, end_index1 = n, start_index2=0, end_index2=n;
	while(start_index1<=end_index1 && start_index2<=end_index2){
		
		for(i=start_index1; i<end_index1; i++){
			a[start_index2][i] = snt[x++];
		}
		start_index2 = start_index2 + 1;
		for(i=start_index2; i<end_index2; i++){
			a[i][end_index1-1] = snt[x++];
		}
		end_index1 = end_index1 -1;
		for(i=end_index1-1; i>=start_index1; i--){
			a[end_index2-1][i] = snt[x++];
		}
		end_index2 = end_index2 -1;
		for(i=end_index2-1; i>=start_index2; i--){
			a[i][start_index1] = snt[x++];
		}
		start_index1 = start_index1 + 1; 
		
	}
	printf("Test %d:\n", test++);
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	}
	return 0;
}
