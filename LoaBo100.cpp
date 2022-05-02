#include<bits/stdc++.h>
using namespace std;
int t;
char a[100000];
vector<int> b; 
int length_sub(vector<int> a){
	int n = a.size();
	int sub =0;
	bool flag =0;
	while(flag ==0){
		flag = 1;
		for(int i =0;i<a.size()-2; i++){
			if(a[i]==1&&a[i+1]==0&&a[i+2]==0){
				flag = 0;
				a.erase(a.begin()+i,a.begin()+i+3);
			}
		}
	}
	return n-a.size();
}
int main(){
	cin>>t;
	while(t--){
		cin>>a;
		int n =strlen(a);
		for(int i =0; i<n;i++){
			b.push_back(a[i]-'0');
		}
		cout<<length_sub(b);
		b.clear();
		cout<<endl;
	}
	return 0;
}
