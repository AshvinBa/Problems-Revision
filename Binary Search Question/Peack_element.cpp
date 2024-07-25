// Peack Element.

#include<bits/stdc++.h>
using namespace std;

int Pick_Element(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;

    while(s<=e)
    {
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
            return arr[mid];
        }
        else if(arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else 
        {
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter size od Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array value: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans = Pick_Element(arr,n);
    cout<<"Peack Element: "<<ans<<endl;
    return 0;
}