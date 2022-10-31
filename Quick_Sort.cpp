#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
	int pivot=arr[e];
	int pIndex=s;
	for(int i=s;i<e;i++){
		if(arr[i] <= pivot){
			int temp=arr[i];
			arr[i]=arr[pIndex];
			arr[pIndex]=temp;
			pIndex++;
		}
	}
	int temp=arr[e];
	arr[e]=arr[pIndex];
	arr[pIndex]=temp;
	return pIndex;
}
void quicksort(int arr[],int s,int e){
	if(s<e){
		int p=partition(arr,s,e);
		quicksort(arr,s,(p-1));
		quicksort(arr,(p+1),e);
	}
}
int main(){
	int size=0;
	cout<<"Enter the size of the arrray "<<endl;
	cin>>size;
	int arr[size];
	cout<<"Enter the Elements "<<endl;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	quicksort(arr,0,(size-1));
	cout<<"After sorting "<<endl;
	for(int j=0;j<size;j++){
		cout<<arr[j]<<endl;
	}
}
