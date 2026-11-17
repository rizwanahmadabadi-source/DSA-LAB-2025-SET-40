#include <iostream>
using namespace std;

int main()
{
    int i, n, pos, value;
    int arr[100];
cout<<"============================================\n";
    cout << "Enter number of elements: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter the value to insert: ";
    cin >> value;
    cout << "Enter the position (1 to " << n + 1 << "): ";
    cin >> pos;

    if (pos < 1 || pos > n + 1 || n >= 100)
    {
        cout << "Invalid position" << endl;
    }
    else
    {
        // Shift elements to the right
        for (i = n - 1; i >= pos - 1; i--)
        {
            arr[i + 1] = arr[i];
        }

        arr[pos - 1] = value;
        n = n + 1;
cout<<"============================================\n";
        cout << "Array after insertion: ";
        for (i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
cout<<"============================================";
    return 0;
}
