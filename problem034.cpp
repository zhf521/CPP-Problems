#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    int countP = 0;
    int countN = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < 0)
        {
            countN++;
        }
        else
        {
            countP++;
        }
    }
    cout << "positive:" << countP << endl
         << "negative:" << countN << endl;
    system("pause");
    return 0;
}