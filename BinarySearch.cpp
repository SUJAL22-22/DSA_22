#include <iostream>
using namespace std;

int binarySearchIterative(int arr[], int size, int target)
{
    int left = 0, right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int binarySearchRecursive(int arr[], int left, int right, int target)
{
    if (left > right)
        return -1;

    int mid = left + (right - left) / 2;

    if (arr[mid] == target)
        return mid;
    else if (arr[mid] < target)
        return binarySearchRecursive(arr, mid + 1, right, target);
    else
        return binarySearchRecursive(arr, left, mid - 1, target);
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int iterativeResult = binarySearchIterative(arr, size, target);
    cout << "Iterative Binary Search Result: ";
    (iterativeResult != -1)
        ? cout << "Element found at index " << iterativeResult << endl
        : cout << "Element not found\n";

    int recursiveResult = binarySearchRecursive(arr, 0, size - 1, target);
    cout << "Recursive Binary Search Result: ";
    (recursiveResult != -1)
        ? cout << "Element found at index " << recursiveResult << endl
        : cout << "Element not found\n";

    return 0;
}