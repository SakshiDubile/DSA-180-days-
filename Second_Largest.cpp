/*5: Find the second largest element in an array of unique elements of size n. Where n>3.*/
#include<iostream>
using namespace std;
int main(){
	
	int arr[5],i;
	int ans=INT_MIN,ans1=INT_MIN;
	for(i=0;i<5;i++){
		cin>>arr[i];
	}
    for(i=0;i<5;i++){
    	cout<<arr[i]<<"\t";
	}
	
	for(i=0;i<5;i++){
		if(arr[i]>ans){
			ans=arr[i];
		}

	}
	
	for(i=0;i<5;i++){
		if(ans!=arr[i] ){
			ans1=max(ans1,arr[i]);
		}
			
	}
	//8,4,3,6,1
	cout<<"2nd largest:"<<ans1;
	
     


	return 0;
}
