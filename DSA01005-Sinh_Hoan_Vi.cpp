#include<bits/stdc++.h>
using namespace std;
#define Max 100
int a[Max];
bool OK;

void Init(int n){
	for(int i=0; i<n; i++){
		a[i] = i+1;
	}
}

void in(int a[], int n){
	for(int i=0; i<n; i++){
		cout<<a[i];
	}
	cout<<" ";
}

void sinh_hoan_vi(int a[], int n){
	int j = n-2;
	while(j>=0 && a[j] > a[j+1]){
		j--;
	}
	if(j>=0){
		int k = n-1;
		while(a[j] > a[k]){
			k--;
		}
		swap(a[j], a[k]);
		int r = j +1, s = n-1;
		while(r<=s){
			swap(a[r], a[s]);
			r++;
			s--;
		}
	} else {
		OK = false;
	}
}

int main(){
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		Init(n);
		OK = true;
		while(OK){
			in(a, n);
			sinh_hoan_vi(a, n);
		}
		cout<<endl;
	}
	return 0;
}
