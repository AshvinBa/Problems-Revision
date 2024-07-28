// Sort Zero's , One's and Two's

#include<bits/stdc++.h>
using namespace std;

vector<int> sort_array(int arr[],int n)
{
    vector<int>ans;

    int cnt1=0,cnt2=0,cnt0=0;
    for(int i=0;i<n;i++)
    {
        switch(arr[i])
        {
            case 0:
            {
                cnt0++;
            }
            break;
            case 1:
            {
                cnt1++;
            }
            break;
            case 2:
            {
                cnt2++;
            }
            break;
        }
    }
    // int i=0;

    while(cnt0!=0)
    {
        ans.push_back(0);
        cnt0--;
    }

    while(cnt1!=0)
    {
        ans.push_back(1);
        cnt1--;
    }

    while(cnt2!=0)
    {
        ans.push_back(2);
        cnt2--;
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

    vector<int>ans = sort_array(arr,n);

    for(auto i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }    
    return 0;
}