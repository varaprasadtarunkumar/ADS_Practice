#include<iostream>
using namespace std;
int LinearSearch(int arr[],int size,int key){
	for(int i=0;i<size;i++){
		if(arr[i]==key){
			return (i+1);
			return -1;
	}
}
}
int main(){
//	int i,n,key;
//	cout<<"Enter the size of the Array "<<endl;
//	cin>>n;
//	int arr[n];
//	cout<<"Enter the elements of the Array "<<endl;
//	for(i=0;i<n;i++){
//		cin>>arr[i];
//	}
	int arr[]={34,42,55,67,12,7,90};
	int size=7;
	//cout<<"Enter the Element you want to search "<<endl;
	//cin>>key;
	int key=55;
	//linear Search
	int result=LinearSearch(arr,size,key);
if(result==-1){
	cout<<"The element is not found in the Array "<<endl;
}
else{
	cout<<"The element is found at position "<<result<<" of the array "<<endl;
}

} 
//#include <iostream>
//using namespace std;
//int LinearSearch(int array[], int n, int x) {
//
//  // Going through array sequencially
//  for (int i = 0; i < n; i++)
//    if (array[i] == x)
//      return i;
//  return -1;
//}
//
//int main() {
//  int array[] = {2, 4, 0, 1, 9};
//  int x = 1;
//  int n = sizeof(array) / sizeof(array[0]);
//
//  int result = LinearSearch(array, n, x);
//  (result == -1) ? cout << "Element not found" : cout << "Element found at index: " << result;
//

