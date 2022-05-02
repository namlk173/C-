#include <bits/stdc++.h>
using namespace std;
 
#define OUT 0
#define IN 1
int t;
char str[1000];
unsigned countWords(char *str)
{	
    int state = OUT;
    unsigned wc = 0; 
    while (*str)
    {

        if (*str == ' ' || *str == '\n' || *str == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++wc;
        }
        ++str;
    }
 
    return wc;
}
 
int main(void)
{
    cin>>t;
    while(t--){
    	cin.ignore(); 
    	cin.getline(str,1000);
    	cout<<countWords(str)<<endl;
	}
    return 0;
}

