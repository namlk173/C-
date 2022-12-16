#include<stdio.h>
int tang_chat(char bienso[]){
	if(bienso[6]<bienso[7]&&bienso[7]<bienso[8]&&bienso[8]<bienso[10]&&bienso[10]<bienso[11]) 
		return 1;
	return 0;	
}

int bang_nhau(char bienso[]){
	if(bienso[6]==bienso[7]&&bienso[7]==bienso[8]&&bienso[8]==bienso[10]&&bienso[10]==bienso[11]) 
		return 1;
	return 0;	
}

int _dau_sau(char bienso[]){
	if(bienso[6]==bienso[7]&&bienso[7]==bienso[8]&&bienso[10]==bienso[11]) 
		return 1;
	return 0;	
}

int loc_phat(char bienso[]){
	int i;
	for(i=6; i<=11; i++){
		if(i==9) continue;
		else{
			if(bienso[i]!='6' && bienso[i]!='8') return 0;
		}
	}
	return 1;
}


int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char bienso[20];
		gets(bienso);
		if(tang_chat(bienso) || bang_nhau(bienso) || _dau_sau(bienso) || loc_phat(bienso))
			printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
