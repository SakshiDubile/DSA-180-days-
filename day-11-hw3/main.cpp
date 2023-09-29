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
    cout<<"Enter the input:";
    cin>>n;
    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            cout<<" ";
        }
        for(ch='A';ch<='A'+(row-1);ch++){
            cout<<ch;
        }
       for(col=row-1;col>=1;col--){
           cout<<(char)('A'+col-1);
       }
        
        
        cout<<endl;
    }
    return 0;
}
