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
    cout<<"Enter the number:";
    cin>>n;
    for(row=0;row<n;++row){
        for(col=1;col<=n-(row+1);col++){
            cout<<" ";
        }
        for(col=row;col>=1;col--){
            cout<<col;
        }
        cout<<endl;
    }

    return 0;
}