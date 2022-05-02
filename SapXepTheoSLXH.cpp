#include<bits/stdc++.h>
using namespace std;
int t, n, a[10000];
struct So{
	int value;
	int slxh;
};
bool compare(So s1, So s2){
	if(s1.slxh>s2.slxh){
		return 1;
	}
	else if(s1.slxh == s2.slxh){
		if(s1.value < s2.value){
			return 1;
		}
	}
	return 0;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		vector<So> v;
		for(int i =0; i<n;i++){
			cin>>a[i];
		}
		for(int i =0; i<n; i++){
			bool flag = 0;
			for(int j =0; j< v.size(); j++){
				if(a[i]==v[j].value){
					flag = 1;
					v[j].slxh= v[j].slxh + 1;
					break;
				}
			}
			if(flag ==0){
				So s;
				s.slxh =1;
				s.value = a[i];
				v.push_back(s);
			}
		}
		sort(v.begin(),v.end(),compare);
		for(int i =0; i<v.size(); i++){
			for(int j =0; j<v[i].slxh; j++){
				cout<<v[i].value<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
