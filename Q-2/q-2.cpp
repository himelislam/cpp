#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mat[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << mat[i][j];
        }
        cout << endl;
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[3][3]

    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}