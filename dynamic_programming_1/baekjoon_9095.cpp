#include <iostream>
using namespace std;

int d[100001];

int go(int x)
{
    if (x <= 0)
        return 0;
    if (x == 1)
        return 1;
    if (x == 2)
        return 2;
    if (x == 3)
        return 4;
    if (d[x] > 0)
        return d[x];
    d[x] = go(x-1) + go(x-2) + go(x-3);
    return d[x];
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        cout << go(x) << '\n';
    }
    return 0;
}