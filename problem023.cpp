#include <iostream>
using namespace std;
int main()
{
    int n, sumO, sumJ = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sumO++;
        }
        else
        {
            sumJ++;
        }
    }
    cout << sumJ << " " << sumO << endl;
    system("pause");
    return 0;
}