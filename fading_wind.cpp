#include <iostream>
#include <vector>
#include <climits>
#include <cctype>
#include <string.h>
#include <cmath>
using namespace std;

int main() {

    int h, k, v, s;

    cin>>h;
    cin>>k;
    cin>>v;
    cin>>s;
    cout<<h<<endl;
    cout<<k<<endl;
    cout<<v<<endl;
    cout<<s<<endl;
    int travel = 0;
    while (h>0)
    {
        v+=s;
        v -= max(1,v/10);

        if(v>=k){
            h+=1;
        }
        if(v>0 && v<k){
            h--;
            if(h==0){
                v=0;
            }
        }
        if(v<=0){
            h=0;
            v=0;
        }
        travel+=v;
        if(s>0){
            s--;
        }
    }
    cout<<travel;
    
}