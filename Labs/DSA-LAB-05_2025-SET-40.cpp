#include <iostream>
using namespace std;

int main()
{
    int i, n, key, found;
    int arr[8]={10,20,30,40,50,60,70,80};

cout<<"==============================================\n";
    for (i = 0; i < 8; i++)
    {
        cout<<arr[i]<<" ";
    }
cout<<"\n==============================================\n";

    cout << "Enter the element to search: ";
    cin >> key;

    found = 0;
    i = 0;

    while (i < n && found == 0)
    {
        if (arr[i] == key)
        {
            found = 1;
        }
        else
        {
            i++;
        }
    }

    if (found == 1)
    {
        cout << "Element " << key << " found at position " << i + 1 << endl;
    }
    else
    {
        cout << "Element " << key << " not found in the array" << endl;
    }

    return 0;
}
