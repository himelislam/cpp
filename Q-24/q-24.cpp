#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int key;
    cin >> key;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == key)
            {
                cout << "Found on: " << "[" << i << "]" << "[" << j << "]" << endl;
                found = true;
            }
        }
    }
    if (!found)
    {
        cout << "Not Found" << endl;
    }
    return 0;
}