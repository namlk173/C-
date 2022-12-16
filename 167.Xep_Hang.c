#include<stdio.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	int t[n], d[n];
	for(i=0; i<n; i++){
		scanf("%d %d", &t[i], &d[i]);
	}
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(t[i]>t[j]){
				int temp = t[i];
				t[i] = t[j];
				t[j] = temp;
				temp = d[i];
				d[i] = d[j];
				d[j] = temp;
			}
		}
	}
	int time_completed = 0;
	for(i=0; i<n; i++){
		if(t[i] > time_completed){
			time_completed = t[i] + d[i];
		}
		else{
			time_completed = time_completed + d[i];
		}
	}
	printf("%d\n", time_completed);
	return 0;
} 
