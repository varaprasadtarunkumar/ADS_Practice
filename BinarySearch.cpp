#include<iostream>
using namespace std;
int binarysearch(int s,int e,int arr[],int key ){
	int mid;
	if(s<=e){
		mid=(s+e)/2;
	}
	//Binary Search implementation
	//if element is found at the mid 
	if(arr[mid]==key){
		return (mid+1);
	}
	//if element is greater than mid
	else if(arr[mid]<key){
		s=mid+1;
	return binarysearch(s,e,arr,key);
	}
	//if element is less than the mid 
	else if(arr[mid]>key){
		e=mid-1;
		return binarysearch(s,e,arr,key);
	}
	//if the element is not present in the array
	else{
		return -1;
	}
}
int main(){
//	int n,arr[n],key;
//	cout<<"Enter the size of the array "<<endl;
//	cin>>n;
//	cout<<"Enter the elements of the array(in sorted order) "<<endl;
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	cout<<"Enter the key "<<endl;
//	cin>>key;
	int arr[]={2,4,6,16,27,30,38,45,48,69};
	int key=16;
	int result =binarysearch(0,/*n-1 */9,arr,key);
	if(result==-1){
		cout<<"The element is not present in the array "<<endl;
	}
	else{
		cout<<"The element is located at position "<<result<<" of the array"<<endl;
	}
}
