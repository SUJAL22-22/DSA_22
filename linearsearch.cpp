#include <iostream>
using namespace std;
int linearsearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key);
    }
    return -1;
}

int main()
{
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "enter the element to search :";
    cin >> key;

    int result = linearsearch(arr, size, key);

    if (result != -1)
        cout << "element found at index :" << result << endl;
    else
        cout << "element not foundat index :" << endl;

    return 0;
}