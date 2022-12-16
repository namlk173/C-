#include<stdio.h>
int so_chan_dac_biet(char number[]){
	int i, n=strlen(number);
	for(i=0; i<n; i++){
		if((number[i]-'0')%2!=0) return 0;
	}
	return 1;
}
int main(){
	int t;
	char number[20];
	scanf("%d", &t);
	while(t--){
		scanf("%s", &number);
		if(so_chan_dac_biet(number)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
} 
