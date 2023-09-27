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
    char ch='A';
    cout<<"Enter number:";
    cin>>n;
    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            cout<<" ";
        }
        for(col=1;col<=row;col++){
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }
    return 0;
}