#include <iostream>
using namespace std;

const int MAX = 1000000;
bool check[MAX+1];

int main()
{
    check[0] = check[1] = true;
    for(int i=2; i*i<=MAX; i++)
    {
        if (check[i]==false)
        {
            for (int j=i+i; j<=MAX; j+=i)
                check[j] = true;
        }
    }
    int m,n;
    cin >> m >> n;
    for (int k=m; k<=n; k++)
    {
        if (check[k]==false)
            cout << k << '\n';
    }
    return 0;
    
}