#include<iostream>
using namespace std;
void display(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
void insertionsort(int  arr[],int n){
	for(int i=1;i<n;i++){  //loop for traversal throughout unsorted part
		int temp=arr[i];
		int j=i-1; //sorted part's end index
		while(j>=0 && arr[j]>temp){
			arr[j+1]=arr[j];
			j--;
		}
		//if condition fails 
		arr[j+1]=temp;
	}
}
int main(){
	int arr[]={5,4,10,1,6,2};
	int size=sizeof(arr)/sizeof(arr[0]);
	insertionsort(arr,size);
	display(arr,size);
}

