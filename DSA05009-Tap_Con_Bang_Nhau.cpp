#include<bits/stdc++.h>
using namespace std;
#define Max 101
int a[Max], n, t, mark[Max], sum;
bool is_exist;

void Init(int n){
	for(int i=0; i<=n; i++){
		mark[i] = 0;
	}
}
void check(int n){
	int sum_check = 0;
	for(int i=1; i<=n; i++){
		sum_check += a[mark[i]-1];
		if(sum_check > sum) return;
	}
	if(sum_check==sum) is_exist = true;
	return;
}

void Try(int i, int k){
	for(int j=mark[i-1]+1; j<=n-k+i; j++){
		mark[i] = j;
		if(i==k){
			check(k);
		}
		else{
			Try(i+1, k);
		}
	}
	return;
}

int main(){
	cin>>t;
	while(t--){
		cin>>n;
		is_exist = false;
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a, a+n);
		for(int i=0; i<n; i++){
			sum += a[i];
		}
		if(sum%2!=0){
			cout<<"NO";
		} else {
			sum =  sum/2;
			for(int i=1; i<n; i++){
				Init(i);
				Try(1, i);
				if(is_exist) {
					break;
				}
			}
			if(is_exist){
				cout<<"YES";
			} else {
				cout<<"NO";
			}
		}
		cout<<endl;
	}
	return 0;
}
