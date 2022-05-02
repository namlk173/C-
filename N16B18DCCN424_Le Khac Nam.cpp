#include<bits/stdc++.h>
using namespace std;
class thangnam{
	private:
		int thang; int nam;
	public:
		thangnam(){}	
		thangnam(int t, int n){
			thang = t;
			nam = n;
		}
		void nhapbp(){
			cout<<"nhap thang: "; cin>>thang; cout<<"nhap ngay: "; cin>>nam;
		}
		void xemmh(){
			cout<<"thang "<<thang<<" nam "<<nam<<endl;
		}
		thoigian(string x){
			int t=0, n=0;
			for(int i = 6; i<8; i++){
				t = t*10 + x[i]-'0';
			}
			for(int i = 13; i<17; i++){
				n = n*10 +x[i]-'0';
			}
			thang = t;
			nam = n;
		}
		operator string(){
			string x ="";
			x ='thang ' + thang + ' nam ' + nam;
			return x;
		}
		thangnam operator +(int x){
			thangnam t;
			int temp = x + thang;
			t.nam = nam + temp/12;
			t.thang = temp %12; 
			return t;
		}
		thangnam operator -(int x){
			thangnam t;
			int temp = thang -x;
			if(temp < 0 && temp >= -12){
				t.nam = nam - 1;
			}
			if(temp<-12){
				t.nam = nam - 1 -(-temp/12); 
			}
			t.thang = 12 - (-temp%12);
			return t;
		}
		bool operator < (thangnam x){
			if(nam < x.nam){
				return 1;
			}
			else if(nam = x.nam){
				if(thang < x.thang){
					return 1;
				}
			}
			return 0;
		}
};
main(){	
		thangnam a, b(10,2021), c;
		a.nhapbp(); a.xemmh();
		string x="thang 11 nam 2021"; 
		c= thangnam(x);
		c.xemmh();
		cout<<"\n"<<string(c);
		c=a+20; c.xemmh(); c=a-20; c.xemmh();
		if (a<b)   cout<<"\n a<b";
		else  	cout<<"\n a>=b";	
}

