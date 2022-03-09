#include <iostream>
#include <algorithm>
using namespace std;

int f2(int num)
{
    int ans=0;
    for (long long i=2; i<=num; i*=2)
        ans += (num/i);
    return ans;
}
int f5(int num)
{
    int ans=0;
    for (long long i=5; i<=num; i*=5)
        ans += (num/i);
    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int ans2 = f2(n) - f2(n-m) - f2(m);
    int ans5 = f5(n) - f5(n-m) - f5(m);
    cout << min(ans2, ans5) << endl;
    return 0;
}