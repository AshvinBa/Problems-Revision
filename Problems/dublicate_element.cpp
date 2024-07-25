// The element occures dublicate.



#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,10,6,7,8,9};
    int n=sizeof(a)/sizeof(a[0]);
    int ans=0;

    for(int i=0;i<n;i++)
    {
        ans=ans^a[i];
    }

    for(int i=0;i<n;i++)
    {
        ans = ans^i;
    }

    cout<<"The Repeated element is: "<<ans;
    return 0;
}