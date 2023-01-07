#include <iostream>
using namespace std;
int main()
{
    int n, m, total, max, min, r,sum = 0;
    cin >> n >> m;
    sum = n * m;
    while (r = m % n) // 辗转相除法
    {
        m = n;
        n = r;
    }//n为最大公约数
    min = sum / n;
    total = n + min;
    cout << total << endl;
    system("pause");
    return 0;
}