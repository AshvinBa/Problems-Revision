#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<int>Return_Occurence(int a[],int n)
{
    vector<int>ans;
    unordered_map<int,int>mp;

    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
    }

    for(auto i:mp)
    {
        if(i.second>1)
        {
            ans.push_back(i.first);
        }
    }
    return ans;
}

int main()
{
    int a[]={4,3,2,7,8,2,3,1};
    int n=sizeof(a)/sizeof(a[0]);

    vector<int>ans = Return_Occurence(a,n);

    sort(ans.begin(),ans.end());
    cout<<"The repeated elements are: ";

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}