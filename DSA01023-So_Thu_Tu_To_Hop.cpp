#include<bits/stdc++.h>
using namespace std;
#define Max 100
int a[Max];
bool OK;

void Init(int k){
	for(int i=0; i<k; i++){
		a[i] = i+1;
	}
}

bool compare_arr(int a[], int b[], int n){
	for(int i=0; i<n; i++){
		if(a[i]!=b[i]) return false;
	}
	return true;
}

void sinh_tap_con_ke_tiep(int a[], int n, int k){
	int i = k-1;
	while(i>=0 && a[i]==n-k+i+1){
		i--;
	}
	if(i>=0){
		a[i] = a[i] + 1;
		for(int j=i+1; j<k; j++){
			a[j] = a[i] + j - i;
		}
	} else {
		OK = false;
	}
	return;
}

int main(){
	int t, n, k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int arr[k];
		for(int i=0; i<k; i++){
			cin>>arr[i];
		}
		Init(k);
		OK = true;
		int res = 0;
		while(OK){
			res++;
			if(compare_arr(a, arr, k)){
				cout<<res;
			}
			sinh_tap_con_ke_tiep(a, n, k);
		}
		cout<<endl;
	}
	return 0;
}
