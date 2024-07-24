#include<bits/stdc++.h>
using namespace std;

bool Check_reapeat(int arr[],int n)
{
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    for(auto s:mp)
    {
        if(s.second>1)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[]={1,2,3,4,5,12,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(Check_reapeat(arr,n))
    {
        cout<<"Yes, it's repeated.";
    }
    else
    {
        cout<<"Not repeated.";
    }
    return 0;
}