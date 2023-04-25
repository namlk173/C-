#include<bits/stdc++.h>
using namespace std;
#define Max 100
typedef bool arr[Max][Max];
int a[Max][Max], t, n;
string s;
bool has_way;
 

void Try(int i, int j, string s, arr visited){
	arr temp;
	for(int x=0; x<n; x++){
		for(int y=0; y<n; y++){
			temp[x][y] = visited[x][y];
		}
	}
	temp[i][j] = true;
	if(i==n-1 && j==n-1){
		if(a[i][j]==1){
			cout<<s<<" ";
			has_way=true;
		}
		return;
	}
	
	if(i<n-1 && a[i+1][j]==1 && !temp[i+1][j]){ // DOWN
		Try(i+1, j, s+"D", temp);
	}
	
	if(j>0 && a[i][j-1]==1 && !temp[i][j-1]) { // LEFT
		Try(i, j-1, s+"L", temp);
	}
	
	if(j<n-1 && a[i][j+1]==1 && !temp[i][j+1]){ // RIGHT
		Try(i, j+1, s+"R", temp);
	}
	
	if(i>0 && a[i-1][j]==1 && !temp[i-1][j]){ // UP
		Try(i-1, j, s+"U", temp);
	}

	return;
}

int main(){
	cin>>t;
	while(t--){
		cin>>n;
		arr mark;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin>>a[i][j];
				mark[i][j] = false;
			}
		}
		has_way = false;
		s="";
		if(a[0][0]==0){
			cout<<"-1";
		} else{
			Try(0, 0, s, mark);
			if(!has_way){
				cout<<"-1";
			}
		}
		cout<<endl;
	}
	return 0;
}
