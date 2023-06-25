#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size Of Array: ";
    cin >> n;
    int arr[n];
    cout << "Entering Elements Of Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Original Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Reversed Array : ";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}