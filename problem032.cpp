#include <iostream>
using namespace std;
int main()
{
    int n, m = 0;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int x, y = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[x][y] < arr[i][j])
            {
                x = i;
                y = j;
            }
        }
    }
    cout << x + 1 << y + 1 << endl;
    system("pause");
    return 0;
}