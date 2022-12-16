#include<stdio.h>
int thuan_nghich(char number[]){
	int n=strlen(number), i;
	for(i=0; i<n; i++){
		if(number[i]!=number[n-i-1]) return 0;
	}
	return 1;
}
int tong_le(char number[]){
	int n=strlen(number), i, tong=0;
	for(i=0; i<n; i++){
		tong = tong + (number[i]-'0');
	}
	if(tong%2==1) return 1;
	return 0;
}
int kiem_tra_le(char number[]){
	int n=strlen(number), i;
	for(i=0; i<n; i++){
		if((number[i]-'0')%2==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	char number[20];
	scanf("%d", &t);
	while(t--){
		scanf("%s", &number);
		if(thuan_nghich(number)&&kiem_tra_le(number)&&tong_le(number)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
