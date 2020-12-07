#include <iostream>

using namespace std;

// n is the size of the array.
// b is the previous element.
// key is current "key" element.
void insertionSort(int arr[], int n)
{
    int a, key, b;

    for (a = 0; a <= n; a++)
    {
        key = arr[a];
        
        b = a - 1;
        while (b >= 0 && arr[b] > key)
        {
            arr[b+1] = arr[b];
            
            b = b - 1;
        }

        arr[b + 1] = key;
    }

}

void printArray(int arr[], int n) 
{
    int i;

    for (i = 0; i <= n; i++)
    {

        cout << arr[i] << " ";

    }

    cout << endl;
}


int main() 
{

    int arr[] = { 8,5,6,2,16,32 };

    int n = sizeof(arr[0]);
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}
