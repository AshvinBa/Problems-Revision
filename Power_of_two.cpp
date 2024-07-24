// Power of Two.
#include<bits/stdc++.h>
using namespace std;

bool isPower(int digit)
{
    int ans=1;

    for(int i=0;i<=30;i++)
    {
        if(ans==digit)
        {
            return true;
        }
        if(ans<INT_MAX/2)
        ans=ans*2;
    }
    return false;
}

int main()
{
    int digit;
    cout<<"Enter the digit: ";
    cin>>digit;
    cout<<"The Power of the number: "<<isPower(digit);
}