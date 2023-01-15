#include <iostream>
using namespace std;
int main()
{
    int man, woman, children;

    for (int man = 1; man <= 30; man++)
    {
        for (int woman = 1; woman <= 30; woman++)
        {
            for (int children = 1; children <= 30; children++)
            {
                if (man * 3 + woman * 2 + children * 1 == 50 && man + woman + children == 30)
                {
                    cout << man << " " << woman << " " << children << endl;
                }
            }
        }
    }
    system("pause");
    return 0;
}