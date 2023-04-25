#include<bits/stdc++.h>
using namespace std;
#define Max 1000
int a[Max], mark[Max];
bool OK = true;

void Init(int n){
	for(int i=0; i<n; i++){
		cin>>a[i];
		mark[i] = 1;
	}
	sort(a, a+n);
	return;
}

bool check_and_print(int a[], int mark[], int n, int k){
	int sum = 0;
	for(int i=0; i<n; i++){
		if(mark[i]==1){
			sum+=a[i];
		}
	}
	if(sum==k){
		int index = n-1;
		while(index>=0 && mark[index]==0){
			index--;
		}
		cout<<"[";
		for(int i=0; i<n; i++){
			if(mark[i]==1) {
				if(i==index) {
					cout<<a[i];
				} else {
					cout<<a[i]<<" ";
				}
			}
		}
		cout<<"]"<<" ";
		return true;
	}
	return false;
}

void sinh(int n){
	int i = n-1;
	while(i>=0 && mark[i]==0){
		mark[i] = 1;
		i--;
	}
	if(i>=0) {
		mark[i] = 0;
	} else {
		OK = false;
	}
}

int main(){
	int t, n, k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		Init(n);
		OK = true;
		int number = 0;
		while(OK){
			number += check_and_print(a, mark, n, k);
			sinh(n);
		}
		if(number==0) {
			cout<<"-1";
		}
		cout<<endl;
	}
	return 0;
}
