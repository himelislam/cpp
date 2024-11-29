#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    int n = 5, pos;
    cin >> pos;
    for (int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// remove an element from a position


#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int pos, n = 5;
    cin >> pos;

    for(int i = pos -1; i > n -1 ; i ++){
        arr[i] = arr[i + 1];
    }
    n--;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}