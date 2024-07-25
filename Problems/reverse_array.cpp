// Reverse array
#include <bits/stdc++.h>
using namespace std;

void Reverse_array(int arr[], int size)
{
    int i = 0;
    int e = size - 1;

    while (i <= e)
    {
        swap(arr[i++], arr[e--]);
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    Reverse_array(arr, n); // Pass the array and its size to the function
    
    cout << "The Reverse array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
