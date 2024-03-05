#include <iostream>
#include <string>
using namespace std;
int maxOfThree(int a, int b, int c) {
    int max = a; // Assume 'a' is the maximum initially

    if (b > max) {
        max = b;
    }

    if (c > max) {
        max = c;
    }

    return max;
}

int minOfThree(int a, int b, int c) {
    int min = a; // Assume 'a' is the minimum initially

    if (b < min) {
        min = b;
    }

    if (c < min) {
        min = c;
    }

    return min;
}
int main() {
int a, b, c;
cin>>a>>b>>c;
int totalAbc = a+b+c;
int maxAbc = maxOfThree(a,b,c);
int minAbc = minOfThree(a,b,c);

int cal=0;
for (int i = minAbc + 1; i < maxAbc; i++)
{
    if(i !=totalAbc-(maxAbc+minAbc)){
        cal+=i;
    }
}
cout<<cal;

}