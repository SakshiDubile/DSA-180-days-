
#include <iostream>

using namespace std;

int main()
{
    int row,col;
   // char ch='A';
    for(row=0;row<5;row++){
        for(char ch ='A';ch<='A'+row;ch++){
            cout<<ch<<" ";
            
        }
        
        cout<<endl;
    }

    return 0;
}