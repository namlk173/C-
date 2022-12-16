#include<stdio.h>
#include<string.h>

struct Word{
	char w[100];
	int time;
};

int main(){
	int i = 0, j, max_size = 0;
	char str[10001];
	struct Word arr[10001]; 
	gets(str);
	char *token = strtok(str, " ");
	while(token != NULL){
		max_size = max_size>strlen(token)?max_size:strlen(token);
		int flag = 0;
		for(j=0; j<i; j++){
			if(strcmp((arr[j].w), (token))==0){
				flag = 1;
				arr[j].time += 1;
			}
		}
		if(flag==0){
			strcpy(arr[i].w, token);
			arr[i].time = 1;
			i = i + 1;
		}
		token = strtok(NULL, " ");
	}
	for(j=0; j<i; j++){
		if(strlen(arr[j].w)==max_size){
			printf("%s %d  %d\n", arr[j].w, max_size, arr[j].time);
		}
	}
	return 0;
} 
