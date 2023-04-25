#include<bits/stdc++.h>
using namespace std;
#define MAX 100
int X[MAX], n, dem = 0;
void Init(){
	cout<<"\n Nhap n = "; cin>>n; 
}

void Result(void){
	cout<<"\n Ket qua "<<++dem<<": ";
	for(int i=1; i<=n; i++){
		cout<<X[i]<<setw(3);
	}
}

void Try(int i){
 	for(int j=0; j<=1; j++){
 		X[i] = j;
 		if(i==n){
 			Result();
 		} else {
 			Try(i+1);
 		}
 	}	
}

int main(){
	Init();
	Try(1);
	return 0;
}
