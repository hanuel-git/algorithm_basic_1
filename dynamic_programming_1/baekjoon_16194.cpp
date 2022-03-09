#include <iostream>
#include <algorithm>

using namespace std;

int p[1001];
int d[1001];

int main()
{
    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++)
        cin >> p[i];
    for(int i=1; i<=n; i++)
        d[i] = -1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if (d[i] == -1 || d[i] > d[i-j]+p[j])
                d[i] = d[i-j]+p[j];
        }
    }
    cout << d[n];
    return 0;
}