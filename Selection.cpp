#include <iostream>
using namespace std;
void selectionsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minindex])
            {

                minindex = j;
            }
        }
        swap(arr[i], arr[minindex]);
    }
    cout << "sottedarray :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "enter number of elements :";
    cin >> n;
    int arr[n];
    cout << "enter elements of array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "original array :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    selectionsort(arr, n);
    return 0;
}