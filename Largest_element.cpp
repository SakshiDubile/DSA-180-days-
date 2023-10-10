#include<iostream>
using namespace std;

int main(){
	/*arr={23,43,40,34,45} */
	int arr[20],i;
	int ans=INT_MIN;
	
	
	for(i=0;i<5;i++){
		cin>>arr[i];
	}
	for(i=0;i<5;i++){
		cout<<arr[i];
	}
	for(i=0;i<5;i++){
		if(arr[i]>ans){
			ans=arr[i];
			}
	
		
	}

	cout<<"First largest of the element is:"<<ans<<endl;
	return 0;
}
