/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int row,col,n;
    cout<<"Enter the number of rows and columns:"<<endl;
    cin>>row;
    cin>>col;
  
    
    for(int i=0;i<row;++i){
        for(int j=5;j>=1;--j){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}
