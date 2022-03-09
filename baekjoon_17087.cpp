#include <iostream>
#include <cmath>
using namespace std;
const int MAX = 100000;
int arr[MAX];

int gcd(int a, int b)
{
    if (b==0)
        return a;
    else
        return gcd(b, a%b);
}
int main()
{
    int n, s;
    cin >> n >> s;
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    int x1, x2;
    x1 = abs(arr[0]-s);
    for (int j=1; j<n; j++)
    {
        x2 = abs(arr[j]-s);
        x1 = gcd(x1, x2);
    }
    cout << x1 << endl;
    return 0;
}