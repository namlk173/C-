#include<bits/stdc++.h>
using namespace std;
int a[8];

bool check_valid(int a[]){
	if(a[4]==0) return false;
	if(a[0]==0 && a[1]==0) return false;
	if(a[2]==2 || (a[2]==0 && a[3]==0)) return false;
	return true;
}

void Print(){
	if(check_valid(a)){
		cout<<a[0]<<a[1]<<"/"<<a[2]<<a[3]<<"/";
		for(int i=4; i<8; i++){
			cout<<a[i];
		}
		cout<<endl;
	}
}

void Try(int i){
	for(int j=0; j<=2; j+=2){
		a[i]=j;
		if(i==7){
			Print();
		} else {
			Try(i+1);
		}
	}
}

int main(){
	Try(0);
	return 0;
}
