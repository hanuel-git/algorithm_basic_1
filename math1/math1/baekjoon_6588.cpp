#include <iostream>
using namespace std;

const int MAX = 1000000;
int prime[MAX];
int pn;
bool check[MAX+1];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    for (int i=2; i<=MAX; i++)
    {
        if (check[i]==false)
        {
            prime[pn++] = i;
            for (int j=i+i; j<=MAX; j+=i)
            {
                check[j] = true;
            }
        }
    }
    while(true)
    {
        int n=-1;
        cin >> n;
        if (n==0)
            break;
        for (int j=1; j<pn; j++)
        {
            if(check[n-prime[j]]==false)
            {
                cout << n << " = " << prime[j] << " + " << n-prime[j] << '\n';
                break;
            }
        }        
    }
    return 0;
}