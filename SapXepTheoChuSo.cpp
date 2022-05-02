#include<bits/stdc++.h>
using namespace std;
int t,n,a[100000];
vector <string> s;
bool compare(int a, int b){
	int ab = 0;
	int ba = 0;
	int x = a;
	int y = b;
	int count1 = 0; 
	while(b!=0){
		count1++;
		b=b/10;
	}
	int count2 = 0;
	while(a!=0){
		count2++;
		a=a/10;
	}
	ab = x*pow(10,count1)+y;
	ba = y*pow(10,count2) +x;
	return ab>ba;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i =0;i<n;i++){
			cin>>a[i];
		}
	sort(a,a+n,compare);
	
	for(int i=0;i<n;i++){
		cout<<a[i];
		}
	cout<<endl;
	}
	return 0;
} 
