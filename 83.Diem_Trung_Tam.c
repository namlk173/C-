#include<stdio.h>
int main(){
	int n, i;
	scanf("%d", &n);
	int start[n-1], end[n-1];
	for(i=0; i<n-1; i++){
		scanf("%d %d", &start[i], &end[i]);
	}
	int center1 = start[0], center2 = end[0];
	int flag1 = 1;
	int flag2 = 1;
	for(i=1; i<n-1; i++){
		if(center1 != start[i] && center1 != end[i]){
			flag1 = 0;
			break;
		}
	}
	for(i=1; i<n-1; i++){
		if(center2 != start[i] && center2 != end[i]){
			flag2 = 0;
			break;
		}
	}
	if(flag1 || flag2) {
		printf("Yes");
	}
	else{
		printf("No");
	}
	return 0;
}
