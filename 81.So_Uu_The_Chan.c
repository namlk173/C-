#include<stdio.h>
int so_chan(char number[]){
	int n = strlen(number);
	if((number[n-1]-'0')%2==0) return 1;
	return 0;
}
int uu_the_chan(char number[]){
	int n = strlen(number);
	int chan = 0, i;
	for(i=0; i<n; i++){
		if((number[i]-'0')%2==0) chan = chan + 1;
 	}
 	if(chan>(n-chan)) return 1;
 	return 0;
}
int main(){
	int t;
	char number[20];
	scanf("%d", &t);
	while(t--){
		scanf("%s", &number);
		if(so_chan(number), uu_the_chan(number)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
