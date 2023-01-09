#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int *array = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int number = 0;
    cin >> number;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (number < array[i])
        {
            for (int j = n; j > i; j--)
            {
                array[j] = array[j - 1];
            }
            break;
        }
    }
    array[i] = number;
    for (int i = 0; i < n + 1; i++)
    {
        cout << array[i] << " ";
    }
    system("pause");
    return 0;
}