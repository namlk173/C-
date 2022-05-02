#include<bits/stdc++.h> 
using namespace std;
  
int main(){
   char string[100], pattern[100];
   char *ptr;
   int length;
   cin.getline(string, 100);
   cin.getline(pattern, 100);
   length = strlen(pattern);
   ptr = strstr(string, pattern);

   strcpy(ptr, ptr+length);
    
   cout << string;
     
   return(0);
}
