#include<bits/stdc++.h>
using namespace std;
int t;
int v, e;
int d, c;

int main(){
	cin>>t;
	while(t--){
		cin>>v>>e;
		pair<int, int> a[v+1];
		for(int i=0; i<e; i++){
			cin>>d>>c;
			a[d].first = a[d].first + 1;
			a[c].second = a[c].second + 1; 
		}
		int is_true = true;
		for(int i=1; i<v+1; i++){
			if(a[i].first!=a[i].second){
				is_true = false;
				break;
			}
		}
		if(is_true){
			cout<<"1"<<endl;
		} else {
			cout<<"0"<<endl;
		}
	}
	return 0;
}
