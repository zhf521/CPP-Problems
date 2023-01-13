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
    int k = 0;
    cin >> k;
    char t;
    int a = 0;
    int b = 0;
    int temp = 0;
    for (int i = 0; i < k; i++)
    {
        cin >> t >> a >> b;
        if (t == 'r') // 行变换
        {
            for (int j = 0; j < m; j++)
            {
                temp = arr[a - 1][j];
                arr[a - 1][j] = arr[b - 1][j];
                arr[b - 1][j] = temp;
            }
        }
        else if (t == 'c') // 列变换
        {
            for (int k = 0; k < n; k++)
            {
                temp = arr[k][a - 1];
                arr[k][a - 1] = arr[k][b - 1];
                arr[k][b - 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}