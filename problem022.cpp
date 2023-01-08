#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                cout << "1 ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    system("pause");
    return 0;
}