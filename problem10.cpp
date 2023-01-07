#include <iostream>
using namespace std;
int main()
{
    int n, h, m, s = 0;
    cin >> n >> h >> m;
    if (m <= n * h)
    {
        if (m % h == 0)
        {
            s = n - (m / h);
            cout << s << endl;
        }
        else
        {
            s = n - (m / h) - 1;
            cout << s << endl;
        }
    }
    else
    {
        cout << "输入数据不正确!" << endl;
    }
    system("pause");
    return 0;
}