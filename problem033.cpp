#include <iostream>
using namespace std;
int main()
{
    int n, m = 0;
    cin >> n >> m;
    int arr1[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr1[i][j];
        }
    }
    int arr2[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr2[i][j];
        }
    }
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr2[i][j] == arr1[i][j])
            {
                num++;
            }
        }
    }
    if (num == n * m)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    system("pause");
    return 0;
}