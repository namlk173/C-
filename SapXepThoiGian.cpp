#include<bits/stdc++.h>
using namespace std;
class ThoiGian{
	private:
		int gio,phut,giay;
	public:
		friend istream &operator >>(istream &input, ThoiGian &t){
			input>>t.gio>>t.phut>>t.giay;
			return input;
		}
		friend ostream &operator <<(ostream &output, ThoiGian &t){
			output<<t.gio<<" "<<t.phut<<" "<<t.giay<<endl;
			return output;
		}
		friend bool compare(ThoiGian t1, ThoiGian t2);
};
bool compare(ThoiGian t1, ThoiGian t2){
	if(t1.gio> t2.gio){
		return 0;
	}
	else if(t1.gio==t2.gio){
		if(t1.phut>t2.phut){
			return 0;
		}
		else if(t1.phut==t2.phut){
			if(t1.giay>t2.giay){
				return 0;
			}
		}
	}
	return 1;
}
int main(){
	int n;
	cin>>n;
	ThoiGian t[n];
	for(int i=0; i<n; i++){
		cin>>t[i];
	}
	sort(t,t+n,compare);
	for(int i=0; i<n; i++){
		cout<<t[i];
	}
	return 0;
}
