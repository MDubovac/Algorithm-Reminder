#include <bits/stdc++.h> 

using namespace std;

int binarySearch(int arr[], int l, int x, int r)
{
    if(r >= l)
    {
        int mid = r + (l - 1) / 2;

        if(arr[mid] == x)
        {
            return mid;
        } 
        else if (arr[mid] > x)
        {
            return binarySearch(arr, l, mid - 1, x);
        }
        else 
        {
            return binarySearch(arr, l, mid + 1, x);
        }
    }
    return -1;
}

int main()
{
    int arr[] = { 1, 2, 5, 6, 10, 40, 52, 61 }; 
    int x = 10; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = binarySearch(arr, 0, n - 1, x); 

    if(result == -1){
        cout << "Element doesn't exist";
    } else {
        cout << "Element exists in array, at index " << result; 
    }
    
    return 0; 
}
