#include<stdio.h>
#include<string.h>
int tangchat(char bienso[]){
	int n = strlen(bienso), i;
	for(i=n-6; i<n-1; i++){
		if(bienso[i]!='.' && bienso[i+1]!='.' && (bienso[i] -'0') >= (bienso[i+1] - '0')) return 0;
	}
	return 1;
}
int bangnhau(char bienso[]){
	int n = strlen(bienso), i;
	for(i=n-6; i<n-1; i++){
		if(bienso[i]!='.' && bienso[i+1]!='.' && (bienso[i] -'0') != (bienso[i+1] - '0')) return 0;
	}
	return 1;
}
int ba_hai(char  bienso[]){
	int n = strlen(bienso), i;
	if(bienso[n-1]-'0' != bienso[n-2] -'0') return 0;
	for(i=n-6; i<n-4; i++){
		if(bienso[i]-'0' != bienso[i+1] -'0') return 0;
	}
	return 1;
}
int loc_phat(char bienso[]){
	int n = strlen(bienso), i;
	for(i=n-6; i<n; i++){
		if((bienso[i] -'0' != 6 && bienso[i] -'0' != 8) && bienso[i] != '.') return 0;
	}
	return 1;
}
int main(){
	int t;
	char bienso[500];
	scanf("%d", &t);
	fflush(stdin);
	while(t--){
		gets(bienso);
		if(tangchat(bienso) || bangnhau(bienso) || ba_hai(bienso) || loc_phat(bienso)) printf("YES\n");
		else{
			printf("NO\n");
		}
	}
	return 0;
}
