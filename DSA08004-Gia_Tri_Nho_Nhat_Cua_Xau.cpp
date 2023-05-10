#include<bits/stdc++.h>
using namespace std;
int t, k;
string s;

long long Result(char str[], int n){
	priority_queue<long long> pq;
	for(int i=0; i<n;){
		long long temp = 1;
		int j = i+1;
		while(j<n && str[i]==str[j]){
			temp = temp + 1;
			j++;
		}
		pq.push(temp);
		i = j;
	}
	while(k--){
		long long new_value = pq.top()-1>=0?pq.top()-1:0;
		pq.pop();
		pq.push(new_value);
	}
	unsigned long long res = 0;
	while(!pq.empty()){
		res = res + pq.top()*pq.top();
		pq.pop();
	}
	return res;
}

int main(){
	cin>>t;
	while(t--){
		cin>>k;
		cin>>s;
		int n = s.length();
		char str[n];
		for(int i=0; i<n; i++){
			str[i] = s[i];
		}
		sort(str, str+n);
		cout<<Result(str, n)<<endl;
	}
	return 0;
}
