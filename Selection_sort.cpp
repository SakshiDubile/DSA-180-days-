#include<iostream>
using namespace std;
int main(){
	
	int arr[100],n,i,j,index;
	cout<<"Enter the size of the array:";
	cin>>n;
	cout<<"Enter the elements:"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(j=0;j<n;j++){
		cout<<arr[j]<<"\t";
	}
	for(i=0;i<n-1;i++){
		index=i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[index]){
				index=j;
			}
			
		}
		swap(arr[i],arr[index]);
	}
	cout<<endl;
	cout<<"Sorted array is:";
	for(i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
	return 0;
}
