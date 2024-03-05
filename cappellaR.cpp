#include <iostream>
#include <string>
using namespace std;

int main()
{
    int size,diff;
    cin>>size;
    cin>>diff;
    int notes[size];

    for (int i = 0; i <size; i++)
    {
        cin>>notes[i];
    }
    for (int i = 0; i < size; i++)
    {
        int maxIndex = i;
        for (int j = i+1; j < size; j++)
        {         
         if (notes[j] > notes[maxIndex]) {
                maxIndex = j;
            }
        }
         if (maxIndex != i) {
            int temp = notes[i];
            notes[i] = notes[maxIndex];
            notes[maxIndex] = temp;
        }
    }

    int group = 0;
    while (size>0)
    {
        int count = 1;
        int temp = notes[size-1];
        for (int i = size-2; i >= 0; i--)
        {
            if(temp + diff>=notes[i]){
                count++;
            }
        }
        group++;
        size-=count--;
        
    }
    cout<<group;
    
}