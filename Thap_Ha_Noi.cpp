#include<bits/stdc++.h>
using namespace std;
void Move(int n, char A, char B, char C){
	if(n==1) {
		cout<<A<<" -> "<<C<<endl;
		return;
	}
	Move(n-1, A, C, B);
	Move(1, A, B, C);
	Move(n-1, B, A, C);
}
int main(){
	int n;
	cin>>n;
	Move(n, 'A', 'B', 'C');
	return 0;
}
