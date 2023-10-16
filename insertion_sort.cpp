#include<iostream>
using namespace std;
int main(){
	int arr[100],step,i,size;
	cout<<"enter the size of the array"<<endl;
	cin>>size;
	for(i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<"Elements of the array before sorting are:";
	for(i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	for(step=1;step<size;step++){ // 
		for(i=step;i>0;i--){
			if(arr[i]>arr[i-1]){
				swap(arr[i],arr[i-1]);
			}
			
		}
	}
	cout<<"elements of array after sorting is:";
	for(i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	
	
	return 0;
}

//   8 4 7 9 2 1
//   4 8 7 9 2 1
//   
