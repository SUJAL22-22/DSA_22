#include <iostream>
using namespace std;
#define MAX 100;

void insertionsort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[100], n;
    cout << "enter number of elements:";
    cin >> n;
    cout << "enter elements of array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "original array:";
    printarray(arr, n);
    insertionsort(arr, n);
    cout << "sorted array;";
    printarray(arr, n);
    return 0;
}
