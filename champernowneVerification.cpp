#include <iostream>
#include <string>
using namespace std;

int main()
{
    string number;
    cin>>number;
    string n="1";
    int count = 1;
    int numLen = number.length();
    while(n.length()<numLen){
        count++;
        string Scount = to_string(count);
        n+=Scount;
    }

    if(n==number){
        cout<<count--;
    }
    else{
        cout<<"-1";
    }
}