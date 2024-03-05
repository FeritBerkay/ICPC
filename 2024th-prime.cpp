#include <iostream>
using namespace std;

bool isPrime(int n){
    bool result = true;
    for (int i = 2; i < n/2; i++)
    {
        if(n%i==0){
            result = false;
            break;
        }
    }
    return result;
    
}
int main() {
    int count = 0;
    int n = 2;
    while (count<2024)
    {
        bool result = isPrime(n);
        if (result==true)
        {
            count++;
        }
        n++;
    }
    cout<<n-1;
    
    return 0;
}