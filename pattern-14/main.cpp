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
    int row,col;
    for(row=5;row>=1;row--){
        for(col=5;col>=row;col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }
   /*
   5
   5 4
   5 4 3 
   5 4 3 2 1
   */

    return 0;
}