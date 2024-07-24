// Reverse Number.

#include<iostream>
using namespace std;
int reverse_digit(int n)
{
    int temp=n;
    int ans=0;
    while(temp)
    {
        int digit = temp%10;
        ans = (ans * 10) + digit;
        temp=temp/10;
    }
    return ans;
}

int main()
{
    int num;
    cout<<"Enter the digit: ";
    cin>>num;
    cout<<"The Reverse Number is: "<<reverse_digit(num);
    return 0;
}