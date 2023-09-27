#include <iostream>

using namespace std;

int main()
{
    int row,col,n,i;
    cout<<"Enter the value for n:";
    cin>>n;
    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            cout<<" ";
            
        }
        for(i=1;i<=row;i++){
            cout<<row;
        }
        cout<<endl;
        
    }

    return 0;
}