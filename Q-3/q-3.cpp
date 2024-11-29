#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 3, 4, 5};

    int pos, value, n = 5;
    cin >> pos >> value;
    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
    for (int i = 0; i <= n; i++)
    {
        cout << " " << arr[i];
    }
    return 0;
}

// insert a element on a position

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {1,2,3,4,5};
    int pos, value, n=5;
    cin >> pos >> value;

    for(int i = n; i >= pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos - 1] = value;

    for (int i = 0; i <= n; i++)
    {
        cout << " " << arr[i];
    }

    return 0;
}