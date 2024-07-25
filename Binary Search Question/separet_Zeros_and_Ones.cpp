#include<bits/stdc++.h>
using namespace std;

void Sort_Zeros_Ones(int arr[],int n)
{

    int left=0;
    int right=n-1;

    while( left <= right )
    {
        if(arr[left]==0 && left<right)
        {
            left++;
        }

        while(arr[right]==1 && left<right)
        {
            right--;
        }

        if( arr[left]==1 && arr[right]==0 && left<right )
        {
            swap(arr[left++],arr[right--]);
        }
    }
}

int main()
{
    int arr[]={0,1,1,0,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    Sort_Zeros_Ones(arr,n);
    cout<<"The sorted Array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}