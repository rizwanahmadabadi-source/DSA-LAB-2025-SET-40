#include <iostream>
using namespace std;

int main()
{
    int i, n, pos;
    int arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter the position to delete (1 to " << n << "): ";
    cin >> pos;

    if (pos < 1 || pos > n)
    {
        cout << "Invalid position" << endl;
    }
    else
    {
        // Shift elements to the left
        for (i = pos - 1; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        n = n - 1;   // reduce the size
cout<<"==============================================\n";
        cout << "Array after deletion: ";
        for (i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
cout<<"==============================================";
    return 0;
}
