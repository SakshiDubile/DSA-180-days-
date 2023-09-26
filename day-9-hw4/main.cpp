/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
void patt(int n1,int n){
    int row,col;
    for(row=1;row<=n1;++row){
        for(col=n;col<=n+(row-1);col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }

    
}

int main()
{
   int n,n1;
   cout<<"Enter the number of rows you want:"<<endl;
   cin>>n1;
   cout<<"Enter the number you want to start with:"<<endl;
   cin>>n;
   patt(n1,n);
    return 0;
}