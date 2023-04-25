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

bool compare_arr(int a[], int b[], int n){
	for(int i=0; i<n; i++){
		if(a[i]!=b[i]) return false;
	}
	return true;
}

int main(){
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		int arr[n];
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		Init(n);
		OK = true;
		int res = 0;
		while(OK){
			res++;
			if(compare_arr(a, arr, n)){
				cout<<res<<endl;
			}
			sinh_hoan_vi(a, n);
		}
	}
	return 0;
}
