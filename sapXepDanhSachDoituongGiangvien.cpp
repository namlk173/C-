#include<bits/stdc++.h>
using namespace std;
int n;
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
		string s = g.getbommon();
		istringstream iss(s);
		string temp ="";
		string word;
		while(iss>>word){
			word[0] = toupper(word[0]);
			temp= temp + word[0];
		}
		g.setbomon(temp);
		cout<<"GV"<<right<<setw(2)<<setfill('0')<<g.ma<<" "<<g.hoten<<" "
		<<g.Bomon<<endl;
		return output;
	}
};
bool compare(GiangVien g1, GiangVien g2){
	string s1 = g1.getten();
	string s2 = g2.getten();
	istringstream iss1(s1), iss2(s2);
	vector<string> a,b;
	string word;
	while(iss1>>word){
		a.push_back(word);
	}
	while(iss2>>word){
		b.push_back(word);
	}
	if(a.back()<b.back()){
		return 1;
	}
	else if(a.back()==b.back()){
		if(g1.getma() < g2.getma()){
			return 1;
		}
	}
	return 0;
}
int main(){
	cin>>n;
	GiangVien gv[n];
	cin.ignore();
	for(int i =0; i<n;i++){
		cin>>gv[i];
	}
	sort(gv, gv+n, compare);
	for(int i =0; i<n; i++){
		cout<<gv[i];
	}
	return 0;
}
