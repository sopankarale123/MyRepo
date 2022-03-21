#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3;
    int count = 0;
    cin >> n1 >> n2 >> n3;
    for (int i = 1; i <= n1; i++)
    {
        if (i % n2 == 0 || i % n3 == 0)
        {
            count = count + i;
        }
    }
    cout << count;
}
