// Alternating Array.

#include<bits/stdc++.h>
using namespace std;

void alternate_digit(int arr[],int n)
{
    for(int i=0;i<n;i+=2)
    {
        swap(arr[i],arr[i+1]);
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    alternate_digit(arr,n);
    cout<<"Answer: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}