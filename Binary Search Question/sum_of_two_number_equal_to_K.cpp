// Sum of two number is equal to the K.

#include<bits/stdc++.h>
using namespace std;

vector<int>Check_the_Two_Number(int arr[],int n,int digit)
{
    vector<int>ans;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((arr[i]+arr[j])==digit)
            {
                ans.push_back(min(arr[i],arr[j]));
                ans.push_back(max(arr[i],arr[j]));
            }
        }
    }
    return ans;
}

int main()
{
    int arr[]={2,3,4,5,6,8,1,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int digit;
    cout<<"Enter the digit: ";
    cin>>digit;

    vector<int>ans=Check_the_Two_Number(arr,n,digit);
    for(auto i=ans.begin();i<ans.end();i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}
