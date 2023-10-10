/*3: Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then implement it.*/


#include<iostream>
using namespace std;
int main(){
	
	int arr[5]={34,35,3,2,1};
	int num,flag=0;
	cout<<"Find the index of the given element:";
	cin>>num;
	for(int i=0;i<5;i++)
	{
		if(arr[i]==num){
			cout<<"Element is present at idx "<<i<<endl;
			flag=1;
			break;
		}
		
	}
	if(flag==0){
		cout<<-1<<endl;
	}
	
	
	return 0;
}
