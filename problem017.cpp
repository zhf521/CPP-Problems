#include <iostream>
using namespace std;
int main()
{
    int status = 0;
    cin >> status;
    switch (status)
    {
    case 200:
        cout << "OK" << endl;
        break;
    case 202:
        cout << "Accepted" << endl;
        break;
    case 400:
        cout << "Bad Request" << endl;
        break;
    case 403:
        cout << "Forbidden" << endl;
        break;
    case 404:
        cout << "Not Found" << endl;
        break;
    case 500:
        cout << "Internal Server Error" << endl;
        break;
    case 502:
        cout << "Bad Gateway" << endl;
        break;
    default:
        break;
    }
    system("pause");
    return 0;
}