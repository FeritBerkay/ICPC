#include <iostream>
#include <vector>
#include <climits>
#include <cctype>
#include <string.h>
#include <cmath>
using namespace std;

int main() {

    double r,f;

    cin>>r;
    cin>>f;

    double turnRate = 180/r;
    int turnDegree = f * turnRate;
  
    int lastDegree = turnDegree%360;
    
    if(lastDegree>90 && lastDegree<270){
        cout<<"down"<<endl;
    }
    else if(lastDegree<90 || lastDegree>270){
        cout<<"up"<<endl;
    }

    //f = dr+kz

    // int d = f/r;
    // int k = f%r;

    // if(d%2==0){
    //     if(k<r/2){
    //         cout<<"up";
    //     }
    //     else if(k>r/2){
    //         cout<<"down";
    //     }
    // }
    // else{
    //      if(k<r/2){
    //         cout<<"down";
    //     }
    //     else if(k>r/2){
    //         cout<<"up";
    //     }
    // }






}