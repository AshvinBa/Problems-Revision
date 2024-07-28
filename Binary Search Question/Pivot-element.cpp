#include<bits/stdc++.h>
using namespace std;

int Pivot_Element(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans=-1;

    while(s<=e)
    {
        if(arr[mid]>=arr[mid-1] && arr[mid]>arr[mid+1])
        {
            ans=arr[mid];
            return ans;
        }
        else if(arr[mid]<arr[0])
        {
            e=mid;
        }
        else if(arr[mid]>arr[e])
        {
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the values: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int answer = Pivot_Element(arr,n);
    cout<<"The Pivot element is: "<<answer<<endl;
    return 0;
}