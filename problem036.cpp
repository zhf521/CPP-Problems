#include <iostream>
using namespace std;
int main()
{
    int N = 0;
    cin >> N;
    int a[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> a[i][j];
        }
    }
    int x, y = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (a[x][y] < a[i][j])
            {
                x = i;
                y = j;
            }
        }
    }
    int o, p = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (a[o][p] > a[i][j])
            {
                o = i;
                p = j;
            }
        }
    }
    cout << "最大值为：" << a[x][y] << ",下标为：" << x + 1 << "," << y + 1 << endl;
    cout << "最小值为：" << a[o][p] << ",下标为：" << o + 1 << "," << p + 1 << endl;
    system("pause");
    return 0;
}