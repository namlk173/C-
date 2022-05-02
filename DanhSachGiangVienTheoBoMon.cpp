#include<bits/stdc++.h>
using namespace std;
int n,q;
int z =0;	
class GiangVien{
	string Bomon;
	string hoten;
	int ma;
	public:
		GiangVien(){
			hoten= "";
			Bomon ="";
			ma = 0;
		}
		void setbomon(string s){
			Bomon = s;
		}
		string getbommon(){
			return Bomon;
		}
		string getten(){
			return hoten;
		}
		int getma(){
			return ma;
		}
	friend istream &operator>>(istream &input, GiangVien &g){
		g.ma = ++z;
		getline(input, g.hoten);
		getline(input, g.Bomon);
		return input;
	}
	friend ostream &operator<<(ostream &output, GiangVien &g){
		cout<<"GV"<<right<<setw(2)<<setfill('0')<<g.ma<<" "<<g.hoten<<" "
		<<g.Bomon<<endl;
		return output;
	}
};

int main(){
	cin>>n;
	GiangVien gv[n];
	cin.ignore();
	for(int i =0; i<n;i++){
		cin>>gv[i];
	}
	for(int i =0; i<n; i++){
		string s = gv[i].getbommon();
		istringstream iss(s);
		string temp ="";
		string word;
		while(iss>>word){
			word[0] = toupper(word[0]);
			temp= temp + word[0];
		}
		gv[i].setbomon(temp);
	}
	cin>>q;
	cin.ignore();
	string querry;
	while(q--){
		getline(cin,querry);
		istringstream iss(querry);
		string word;
		string temp = "";
		while(iss>>word){
			word[0] = toupper(word[0]);
			temp = temp + word[0];
		}
		cout<<"DANH SACH GIANG VIEN BO MON "<<temp<<":"<<endl;
		for(int i =0; i<n; i++){
			if(gv[i].getbommon()==temp){
				cout<<gv[i];
			}
		}
	}
	return 0;
}
