#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++) //n-i-1 is used since at each round corresponding highest element is placed at the right
	if(arr[j]>arr[j+1])	{
		int  temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
	}
	}
}
void display(int arr[],int size){
	for(int  i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
int main() {
  int arr[] = {-2, 45, 0, 11, -9};
  int size = sizeof(arr) / sizeof(arr[0]);
  bubblesort(arr,size);
  cout << "Sorted Array in Ascending Order:\n";  
  display(arr, size);
}

