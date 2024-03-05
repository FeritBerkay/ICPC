#include <iostream>
#include <string>
using namespace std;

int main() {
    int ds, ys, dm, ym;

    cin>>ds;
    cin>>ys;
    cin>>dm;
    cin>>ym;

    for (int i = 0; i <5000; i++)
    {
        int temp = ys-ds+(ds*i);
        temp -= ym - dm;
        if(temp%ym==0){
            temp +=ym - dm;
            cout<<temp;
            break;
        }
    }
    

}