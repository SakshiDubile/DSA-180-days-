/*1: Take 20 elements from user input and find its sum with the help of an array.
*/

#include<iostream>
using namespace std;
int main(){
	int arr[20],sum=0,i;
	cout<<"Enter the numbers in the array: "<<endl;
	for(i=0;i<20;++i){
		cout<<"Element "<<i<<":-> ";
		cin>>arr[i];
		sum=sum+arr[i];
	}
	for(i=0;i<20;++i){
		cout<<arr[i]<<endl;
	}1: Take 20 elements from user input and find its sum with the help of an array.

	cout<<"Sum of the above numbers in an array is: "<<sum;
	return 0;
}
