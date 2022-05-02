#include<bits/stdc++.h>
using namespace std;

class thoigian{
	private:
	int thang,nam;
	public:
	thoigian(int th, int n){
		thang = th;
		nam = n;
	}
	thoigian(){
	}
void nhapbp(){
		cout<<"Nhap thang: ";cin>>thang;
		cout<<"nhap nam:"; cin>>nam;
	}
	 void xemmh(){
		cout<<"thang: " <<thang<<" nam: "<<nam<<endl;
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
	operator char*(){
		string x ="";
		x ='thang ' + thang + ' nam ' + nam;
		char *cstr = new char[x.length() + 1];
		strcpy(cstr, x.c_str());
		return cstr;
	}
	bool operator < (thoigian x){			
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
	thoigian operator +(int x){
			thoigian t;
			int temp = x + thang;
			t.nam = nam + temp/12;
			t.thang = temp %12; 
			return t;
		}
	int operator -(thoigian x){
			int m = 0;
			m = (nam - x.nam)*12 + (thang - x.thang);
			return m;
			
	}
	
};
main()
{thoigian a, b(10,2021), c;
a.nhapbp(); a.xemmh();
c= thoigian("thang 11 nam 2021");c.xemmh();
cout<<"\n "<<(char *)(c);
if(a<b)   cout<<"\n a<b";
else cout<<"\n a>=b";
int sothang=a- b; cout<<"\n a - b ="<<sothang;
c=a+12; c.xemmh();}
