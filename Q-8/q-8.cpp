#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, pos = -1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int search;
    cin >> search;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            pos = i + 1;
            break;
        }
    }
    if (pos != -1)
    {
        cout << "Element found on position " << pos << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}