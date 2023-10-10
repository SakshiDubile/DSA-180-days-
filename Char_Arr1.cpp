/*4: Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.*/
#include<iostream>
using namespace std;
int main(){
	
	char arrc[50];
	int i;
	for(i=0;i<26;i++){
		arrc[i]=char('a'+i);
		
	}
/*	for(char c ='a';c<'z'+1;c++){
	//	arrc[i]=c;
		cout<<c<<endl;
	}*/
	
	for(i=0;i<26;i++){
		cout<<arrc[i]<<"\n";
	}	
	return 0;
}
