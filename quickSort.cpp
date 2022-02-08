#include <iostream>
using namespace std;

void quickSort(int arr[], int n)
{
  // Counters
  int i, j;

  // Loop
  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[i])
      {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

int main() {
  
  int testArr[] = { 1, 4, 2, 41, 5, 6, 55, 22, 12 };
  int n = sizeof(testArr) / sizeof(testArr[0]);

  quickSort(testArr, n);
  for (int i = 0; i < n; i++) 
  {
    cout << testArr[i] << ", ";
  }
  
  return 0;
}
