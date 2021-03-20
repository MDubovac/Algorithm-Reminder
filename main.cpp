#include<iostream>

using namespace std;

void bubbleSort(double arr[], int n){
    int j, i;
    for(j = 0; j < n - 1; j++){
        for(i = 0; i < n - j - 1; i++){
            if(arr[i] > arr[i+1]){
                double temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
}

void printArray(double arr[], int size){
    int i;
    for(i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Test
    double speed[] = {123.4, 211.2, 220.5, 167.4, 189.5, 192.2};
    int n = sizeof(speed) / sizeof(speed[0]);

    bubbleSort(speed, n);
    printArray(speed, n);

    return 0;
}
