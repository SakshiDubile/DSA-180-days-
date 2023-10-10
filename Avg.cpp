/*2: Calculate the average of elements in an array of size 18.*/

#include<iostream>
using namespace std;
int main(){
	int arr[18],sum=0,i;
	double avg;
	cout<<"Enter the number in array: "<<endl;
	for(i=0;i<18;++i){
		cin>>arr[i];
		sum+=arr[i];
	}
	    cout<<sizeof(arr);
		avg=sum/18;
		cout<<"Average of the numbers are:"<<avg;
	
	return 0;
}
