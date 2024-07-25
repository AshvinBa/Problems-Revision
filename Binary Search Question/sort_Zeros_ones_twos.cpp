#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sort_Zeros_ones(int arr[],int n)
{
    int zero=0;
    int one=0;
    int two=0;

    for(int i=0;i<n;i++)
    {
        switch(arr[i])
        {
            case 0:
            {
                zero++;
            }
            break;
            case 1:
            {
                one++;
            }
            break;
            case 2:
            {
                two++;
            }
            break;
        }
    }
    int i=0;
    while(zero>0)
    {
        arr[i++]=0;
        zero--;
    }
    while(one>0)
    {
        arr[i++]=1;
        one--;
    }
    while(two>0)
    {
        arr[i++]=2;
        two--;
    }
}

int main()
{
    int arr[]={0,1,0,2,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    sort_Zeros_ones(arr,n);

    for(auto i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}