#include<iostream>
using namespace std;
int main(){
	int arr[100],step,size,i,idx;
	cout<<"enter the size of the array";
	cin>>size;
	for(i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<"Hence the elements in the array before sorting are:"<<endl;
	for(i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	for(step=1;step<size;step++){//step=size-2;step>=0;size--
		for(i=0;i<size-1;i++){ //i=0;i<=size-2;
			if(arr[i]<arr[i+1]){
				swap(arr[i],arr[i+1]);
			}
		}
	}
	cout<<endl;
	cout<<"Sorted array:"<<endl;
	for(i=0;i<size;i++){
		cout<<arr[i];
	}
	return 0;
}


//5 8 4 9 2 6 
