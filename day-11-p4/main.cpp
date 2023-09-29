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
    
    for(row=n/2;row>=1;row--){
        for(col=1;col<=row;col++){
            cout<<"* ";
        }
        for(col=1;col<=n-2*row;col++){
            cout<<"  ";
        }
        for(col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
       

    
}

      
for(row=1;row<=4;row++){
        for(col=1;col<=row;col++){
            cout<<"* ";
        }
        for(col=1;col<=8-2*row;col++){
            cout<<"  ";
        }
        for(col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
}
   return 0;
}
