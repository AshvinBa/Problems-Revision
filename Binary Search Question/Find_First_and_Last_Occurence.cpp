// First and Last Occurence Of the Digit.

#include<bits/stdc++.h>
using namespace std;

int first_Occurance(int arr[],int digit,int n)
{
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans=-1;

    while(s<=e)
    {
        if(arr[mid]==digit)
        {
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<digit)
        {
            s=mid+1;
        }
        else 
        {
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}

int last_Occurance(int arr[],int digit,int n)
{
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans=-1;

    while(s<=e)
    {
        if(arr[mid]==digit)
        {
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<digit)
        {
            s=mid+1;
        }
        else 
        {
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}

int main()
{
    int digit;
    cout<<"Enter the digit: ";
    cin>>digit;

    int arr[]={1,4,4,4,4,4,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);

    int First=first_Occurance(arr,digit,n);
    cout<<"\nFirst Occurence: "<<First<<endl;

    int Last=last_Occurance(arr,digit,n);
    cout<<"\nFirst Occurence: "<<Last<<endl;

    return 0;
}