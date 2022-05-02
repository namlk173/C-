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
bool check(string s1, string s2){
	if(s2.length()>s1.length()){
		return 0;
	}
	if(s1==s2){
		return 1;
	}
	string temp;
	for(int i =0; i<s1.length(); i++){
		temp ="";
		for(int j =i; j<s1.length(); j++){
			temp = temp + s1[j];
			if(temp == s2){
				return 1;
			}
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
		cout<<"DANH SACH GIANG VIEN THEO TU KHOA "<<querry<<":"<<endl;
		for(int i =0 ;i<querry.length();i++){
			querry[i] = tolower(querry[i]);
		}
		for(int i =0; i<n; i++){
		string ten = gv[i].getten();
		for(int i=0;i<ten.length(); i++){
			ten[i] = tolower(ten[i]);
		}
		stringstream iss(ten);
		string word;
		string temp="";
		while(iss>>word){
			temp = temp + word;
		}
		if(check(ten,querry)==1||check(temp,querry)==1){
			cout<<gv[i];
		}
		}
	}
	return 0;
}
