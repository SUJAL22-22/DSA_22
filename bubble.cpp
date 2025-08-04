#include <iostream>
using namespace std;
#define MAX 100

void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
    int arr[MAX], n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Original array: ";
    printarray(arr, n);
    bubblesort(arr, n);
    cout << "Sorted array: ";
    printarray(arr, n);
    return 0;
}

// #include <iostream>
// using namespace std;

// void bubblesort(int arr[], int n)
// {

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }
// void print(int arr[], int n)
// {
//     for (int i = 0; i <= n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int n;

//     cout << "enter the value of n:";
//     cin >> n;

//     int arr[n];

//     cout << "Enter " << n << " elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     bubblesort(arr, n);
//     print(arr, n);
//     return 0;
// }
