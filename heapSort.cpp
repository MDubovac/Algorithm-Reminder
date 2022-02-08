#include <iostream>
 
using namespace std;

// Heapify
void heapify(int arr[], int n, int i) 
{
  // Init largest, left and right
  int largest = i;
  int l = 2 * i + 1;
  int r = 2 * i + 2;

  // If left > current largest
  if (l < n && arr[l] > arr[largest])
  {
    largest = l;
  }

  // If right > current largest
  if (r < n && arr[r] > arr[largest])
  {
    largest = r;
  }

  // If largest != root
  if (largest != i)
  {
    swap(arr[i], arr[largest]);
    heapify(arr, n, largest);
  }
}

// Heap sort
void heapSort(int arr[], int n)
{
  for (int i = n / 2 - 1; i >= 0; i--)
  {
    heapify(arr, n, i);
  }

  for (int i = n - 1; i > 0; i--)
  {
    swap(arr[0], arr[i]);
    heapify(arr, i, 0);
  }
}
 
// Main
int main()
{
  int testArr[] = { 1, 4, 2, 41, 5, 6, 55, 22, 12 };
  int n = sizeof(testArr) / sizeof(testArr[0]);

  heapSort(testArr, n);

  for (int i = 0; i < n; i++) 
  {
    cout << testArr[i] << ", ";
  }
  
}
