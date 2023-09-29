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
    cout<<"Enter no. of rows:";
    cin>>n;
    for(row=5;row>=1;row--){
        for(col=1;col<=(9-(2*row-1))/2;col++){
            cout<<"  ";
        }
        for(col=1;col<=2*row-1;col++){
            
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}