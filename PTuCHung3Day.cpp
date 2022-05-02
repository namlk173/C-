#include<bits/stdc++.h>
using namespace std;
int t, n1, n2, n3;
long long a[1000000],b[1000000],c[1000000];
	vector<int> v1;
	vector<int> v;
void add_number(long long a[], long long b[], long long c[], int n1, int n2, int n3){
	int i =0, j= 0;
	while(i<n1&&j<n2){
		if(a[i]==a[i+1]){
			i++;
		}
		else if(b[j]==b[j+1]){
			j++;
		}
		else if(a[i]<b[j]){
			i++;
		}
		else if(a[i]>b[j]){
			j++;
		}
		else{
			v.push_back(a[i]);
			i++;
			j++;
		}
	}
	i =0, j= 0;
	while(i<v.size()&& j<n3){
		if(v[i]==v[i+1]){
			i++;
		}
		else if(c[j]==c[j+1]){
			j++;
		}
		else if(v[i]<c[j]){
			i++;
		}
		else if(v[i]>c[j])
		{
			j++;
		}
		else{
			v1.push_back(v[i]);
			i++;
			j++;
		}
	}
	if(v1.size()==0){
		cout<<"-1";
	} 
	else{
		for(int i = 0; i<v1.size(); i++){
		cout<<v1[i]<<" ";
	}
	}

	v.clear();
	v1.clear();
}
int main(){
	cin>>t;
	while(t--){
		cin>>n1>>n2>>n3;
		for(int i =0 ;i<n1; i++){
			cin>>a[i];
		}
		for(int i =0 ;i<n2; i++){
			cin>>b[i];
		}
		for(int i =0 ;i<n3; i++){
			cin>>c[i];
		}
		add_number(a,b,c,n1,n2,n3);
		cout<<endl;
	}
	return 0;
} 
