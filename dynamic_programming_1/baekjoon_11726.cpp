#include <iostream>
using namespace std;

long long d[1001];

long long go(long long n)
{
    if (n == 1)
    {
        d[1] = 1;
        return d[1];
    }
    if (n == 2)
    {
        d[2] = 2;
        return d[2];
    }   
    if (d[n]>0)
        return d[n];
    d[n] = (go(n-1) + go(n-2)) % 10007;
    return d[n];
}

int main()
{
    long long n;
    cin >> n;
    
    cout << go(n);
}