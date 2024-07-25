// Unique Number.

#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int unique_element(int arr[],int n)
{
    int ans=0;
    
    for(int i=0;i<n;i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[]={1,23,4,5,6,4,5,6,5,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The Unique Element is: "<<unique_element(arr,n);
}