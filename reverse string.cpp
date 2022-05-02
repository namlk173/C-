#include <bits/stdc++.h>
using namespace std;
string s;
vector <string> result;
int t;
int main()
{	
	cin>>t;
	cin.ignore(); 
	while(t--){
	getline(cin,s);
 	istringstream ss(s);
 	string word; 
 	while (ss >> word) 
    {
 		result.push_back(word);
    }
    for(int i = result.size()-1;i>=0; i--){
    	cout<<result[i]<<" ";
	}
	result.clear();
	cout<<endl;
	}
    return 0;
}
