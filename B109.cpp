#include <bits/stdc++.h>
using namespace std;
int t;
string n;
void prevNum(string N)
{
    int len = n.length();
    int index = -1;

    for (int i = len - 2; i >= 0; i--) {
        if (N[i] > N[i+1])
        {
            index = i;
            break;
        }
    }
    int smallGreatDgt = -1;
    for (int i = len - 1; i > index; i--) {
        if (N[i] < N[index]) {
            if (smallGreatDgt == -1)
                smallGreatDgt = i;
            else if (N[i] >= N[smallGreatDgt])
                smallGreatDgt = i;
        }
    }
    if (index == -1)
        {
        	cout<<"-1";
        	return;
		}
    if (smallGreatDgt != -1)
    {
        swap(N[index], N[smallGreatDgt]);
        if(N[0]=='0'){
        	cout<<"-1";
        	return;
		}
		else{
			for(int i =0;i<len;i++){
				cout<<N[i];
			}
			return;
		}
        
    }
     
    cout<<"-1";
    return;
}
int main()
{
	cin>>t;
	cin.ignore();
	while(t--){
		cin>>n;
		prevNum(n);
		cout<<endl;
	}
    return 0;
}
