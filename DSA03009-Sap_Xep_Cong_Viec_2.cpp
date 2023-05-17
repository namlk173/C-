#include <bits/stdc++.h>
using namespace std;
class cv{
  private: int ma;
           int deadline;
           int profit;
  public :
           int getma(){
               return ma;
           }
           int getdeadline(){
               return deadline;
           }
           int getprofit(){
               return profit;
           }
           void nhapma(){
               cin>>ma;
           }
           void nhapdeadline(){
               cin>>deadline;
           }
           void nhapprofit(){
               cin>>profit;
           }
};

int sx(cv a, cv b){
   return (a.getprofit()>b.getprofit())?1:0;
}

int main(){
int p; cin>>p;
while(p--){
     int n; cin>>n;
     cv a[n];
     for(int i=0;i<n;i++){
        a[i].nhapma();
        a[i].nhapdeadline();
        a[i].nhapprofit();
     }
     sort(a,a+n,sx);
     int dem=0, tong=0;
     int check[1001]={0};
     for(int i=0;i<n;i++){
        int temp=a[i].getdeadline();
        while(check[temp]==1&temp>0)
            temp--;
        if(check[temp]==0&&temp>0){
            dem++;
            tong+=a[i].getprofit();
            check[temp]=1;
        }
     }
     cout<<dem<<" "<<tong<<endl;
  }
}
