#include <iostream>
using namespace std;

bool prime(int a)
{
    if (a<2)
        return false;
    for (int i=2; i*i<=a; i++)
    {
        if (a%i==0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    
    int ans=0;
    while(n--)
    {
        int a;
        cin >> a;
        if(prime(a))
            ans++;
    }
    cout << ans << '\n';
    return 0;
}