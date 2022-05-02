#include<bits/stdc++.h>
using namespace std;
int t;
string s;
int main(){
	cin>>t;
	cin.ignore();
	while(t--){
		getline(cin,s);
		int sum =0;
		int l = s.length();
		bool flag =0; 
		for(int i =0;i<l ;i++){
			int temp =0;
			if(isdigit(s[i])){
				int j =i;
					while(isdigit(s[j])){
						temp = temp*10 + (s[j]-'0');
						j++;
					}
				i=j;
			}
			sum+=temp;
		}
		cout<<sum<<endl;
	}
	return 0;
} 
