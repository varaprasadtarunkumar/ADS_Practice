#include<iostream>
using namespace std;
//class Node{
//	public:
//	 int data;
//	 Node* next;
//};
// void swap(arr[key],arr[siz])
int main(){
	int size,i;
	cout<<"Enter the size "<<endl;
	cin>>size;
	int arr[size];//arr2[size];
	cout<<"Enter the elements"<<endl;
	for(i=0;i<size;i++){
		cin>>arr[i]; 
		}
	for(i=0;i<size;i++){
		int key=arr[i]%size;
		// arr2[key]=arr1[i];
		//swap(arr[key],arr[i]);
		/*int temp=arr[key];
		arr[key]=arr[i];
		arr[i]=temp; */
		arr[i]=arr[key];
	}
	cout<<"The array is "<<endl;
	for(i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}

