#include<iostream>
using namespace std;
void bubble(int arr[],int n)
{
int i,j;
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[j]<arr[i])
{
int temp;
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
}
int main()
{
int arr[5],n=5,beg=0,end=4,search,temp=-1;
for(int i=0;i<5;i++)
{
cin>>arr[i];
}
bubble(arr,n);
for(int i=0;i<5;i++)
{
cout<<arr[i];
}

cin>>search;
int mid=-1;
while(beg<=end&&arr[mid]!=search)
{
mid=(beg+end)/2;
if(arr[mid]==search)
{
temp=mid;
cout<<temp <<"is found"<<endl;
}
else if(arr[mid]>search)
end=mid-1;
else
beg=mid+1;
}
if(temp==-1)
cout<<"not found";
    return 0;
}
