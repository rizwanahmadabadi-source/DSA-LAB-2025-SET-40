#include <iostream>
using namespace std;

int main()
{
    int i, j, n, key, temp, found, low, high, mid;
    int arr[8]={15,25,35,45,55,65,75,85};

cout<<"==============================================\n";
    for (i = 0; i < 8; i++)
    {
        cout<<arr[i]<<" ";
    }
cout<<"\n==============================================\n";

    // Sort the array first (bubble sort), because binary search needs a sorted array
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter the element to search: ";
    cin >> key;

    low = 0;
    high = n - 1;
    found = 0;

    while (low <= high && found == 0)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            found = 1;
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (found == 1)
    {
        cout << "Element " << key << " found at position " << mid + 1 << endl;
    }
    else
    {
        cout << "Element " << key << " not found in the array" << endl;
    }

    return 0;
}
