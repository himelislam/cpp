#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0, avg;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    avg = sum / n;
    cout << "Sum of the array: " << sum << endl;
    cout << "Average of the array elements: " << avg << endl;
    return 0;
}