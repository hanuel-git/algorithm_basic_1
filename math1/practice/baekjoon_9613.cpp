#include <iostream>
using namespace std;
const int MAX = 100;
int arr[MAX];

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int g = gcd(arr[i], arr[j]);
                ans += g;
            }
        }
        cout << ans << endl;
    }
    return 0;
}