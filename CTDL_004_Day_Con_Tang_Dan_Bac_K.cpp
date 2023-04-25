#include<bits/stdc++.h>
using namespace std;
#define Max 100
int a[Max], n, k;
int mark[Max];
bool OK;
int res = 0;

void Init(int k){
	for(int i=0; i<k; i++){
		mark[i] = i;
	}
}

bool check(){
	for(int i=0; i<k-1; i++){
		if(a[mark[i]] >= a[mark[i+1]]){
			return false;
		}
	}
	return true;
}

void Print(){
	if(check()){
		res++;
	}
}

void sinh(){
	int i=k-1;
	while(i>=0 && mark[i]==n-k+i){
		i--;
	}
	if(i>=0){
		mark[i] = mark[i] + 1;
		for(int j=i+1; j<k; j++){
			mark[j] = mark[i] + j - i;
		}
	} else{
		OK = false;
	}
	return;
}

int main(){
	cin>>n>>k;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	Init(k);
	OK = true;
	while(OK){
		Print();
		sinh();
	}
	cout<<res<<endl;
	return 0;
}
