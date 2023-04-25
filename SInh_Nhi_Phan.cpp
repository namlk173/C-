#include<bits/stdc++.h>
using namespace std;
#define Max 100
int X[Max], n, dem = 0;
bool OK = true;

void Init(void) {
	cout<<"Nhap n = "; cin>>n;
	for(int i=0; i<n; i++){
		X[i] = 0;
	}
}

void Result(void){
	cout<<"\n Xau thu "<< ++dem<<": ";
	for(int i=0; i<n; i++){
		cout<<X[i]<<setw(3);
	}
}

void Next_Bin_String(void){
	int i = n-1;
	while(i>=0 && X[i]){
		X[i] = 0;
		i--;
	}
	if(i>=0){
		X[i] = 1;
	} else {
		OK = false;
	}
}

int main(){
	Init();
	while(OK){
		Result();
		Next_Bin_String();
	}
	return 0;
}
