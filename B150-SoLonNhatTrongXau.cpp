#include<bits/stdc++.h>
using namespace std;
int t;
string s;
int main(){
	cin>>t;
	cin.ignore();
	while(t--){
		getline(cin,s);
		int Max =0;
		int l = s.length();
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
			Max = max(temp,Max);
		}
		cout<<Max<<endl;
	}
	return 0;
} 
