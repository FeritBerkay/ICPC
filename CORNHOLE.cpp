#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main(){
    int h1, b1, h2, b2;

    cin>>h1;
    cin>>b1;
    cout<<endl;
    cin>>h2;
    cin>>b2;

    int numberP1= h1 * 3 + b1;
    int numberP2 = h2*3 + b2;

    if(numberP1 == numberP2){
        cout<<"NO SCORE"<<endl;
    }
    else if(numberP1 > numberP2){
        int dif = numberP1 - numberP2;
        cout<<"1 "<<dif<<endl;
    }
    else{
        int dif = numberP2 - numberP1;
        cout<<"2 "<<dif<<endl;
    }
}