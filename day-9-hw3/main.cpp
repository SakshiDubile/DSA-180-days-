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
  // char ch='A';
   for(row=1;row<=5;++row){
         for(char ch = 'A'; ch<='A'+(5-row-1);ch++){
              cout<<ch<<" ";
              
          }
      // ch='A';
       cout<<endl;
   }

    return 0;
}