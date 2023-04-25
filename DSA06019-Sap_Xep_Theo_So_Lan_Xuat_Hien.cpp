#include<bits/stdc++.h>
using namespace std;

struct number{
	int value, time;
};

bool compare(number num1, number num2){
	if(num1.time > num2.time) {
		return true;
	} else if(num1.time == num2.time){
		if(num1.value < num2.value) {
			return true;
		} else{
			return false;
		}
	} 
	return false;
}
int main(){
	int t, n, k;
	cin>>t;
	while(t--){
		cin>>n;
		vector<number> v;
		for(int i=0; i<n; i++){
			cin>>k;
			bool is_exist = false;
			for(int j=0; j<v.size(); j++){
				if (v[j].value == k) {
					v[j].time++;
					is_exist = true;
					break;
				}
			}
			if(!is_exist) {
				struct number num;
				num.value = k;
				num.time = 1;
				v.push_back(num);
			} 
		}
		sort(v.begin(), v.end(), compare);
		for(int i=0; i<v.size(); i++){
			for(int j=0; j<v[i].time; j++){
				cout<<v[i].value<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
