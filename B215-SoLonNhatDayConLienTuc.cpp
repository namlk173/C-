#include <bits/stdc++.h>
using namespace std;
int t; 
int k,n,a[10000000];
void printKMax(int arr[], int n, int k)
{

    std::deque<int> Qi(k);
    int i;
    for (i = 0; i < k; ++i)
    {
        while ((!Qi.empty()) && arr[i] >=
                            arr[Qi.back()])

            Qi.pop_back();

        Qi.push_back(i);
    }
    for (; i < n; ++i)
    {

        cout << arr[Qi.front()] << " ";
        while ((!Qi.empty()) && Qi.front() <=i - k)
            Qi.pop_front();

        while ((!Qi.empty()) && arr[i] >=
                             arr[Qi.back()])
            Qi.pop_back();

        Qi.push_back(i);
    }
    cout << arr[Qi.front()];
}
int main()
{
cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0; i<n;i++){
			cin>>a[i];
		}
    printKMax(a, n, k);
    cout<<endl;
}
    return 0;
}
