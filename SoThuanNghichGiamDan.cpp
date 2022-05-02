#include <iostream>

using namespace std;

int main()
{

string input;
string line;

cout<< "Enter the input line" << endl;

while (getline(cin, line))
{
    if (line == "^D")
        break;

    input += line;
}

 cout<< "The input entered was: "<<endl;
 cout<< input<< endl;

}
