#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    while (n != EOF)
    {
        cin >> n;
        int result = 2 << n - 1;
        cout << result << " ";
    }
    system("pause");
    return 0;
}