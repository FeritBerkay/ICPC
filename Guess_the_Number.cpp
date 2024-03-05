#include <iostream>

using namespace std;
class Greet { 
   public: 
      string g1;
      string g2; 
      string g3; 
      string g4; 
      void Print() const;
      Greet() { 
         g1 = "Hi! "; 
         g3 = "Good morning! "; 
         g4 = "Good night! "; 
   }
};
void Greet::Print() const {
   cout << g1 << g2 << g3;
}
int main(){

    // int gameN;
    // string result;
    // int f = 1;
    // int l = 1000;
    // cin>>gameN;
    // int guessC = 1;
    // while(gameN>0){
    //     while(guessC<=10){
    //         int guess = (f+l)/2;
    //         cout<<guess<<endl;
    //         cin>>result;
        
    //         guessC++;
    //         if(result=="lower"){
    //             l = guess - 1;
    //         }
    //         else if(result=="correct"){
    //             break;
    //         }
    //         else if(result=="higher"){
    //             f = guess + 1;
    //         }
    //     }
    //     f = 1;
    //     l = 1000;
    //     guessC = 1;
    //     gameN--;
Greet user1; 
user1.Print(); 
user1.g2 = "Hello!";
    }

