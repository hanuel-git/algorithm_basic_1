#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b==0)
        return a;
    else
        return gcd(b, a%b);
}
int lcm(int a, int b)
{
    int g = gcd(a,b);
    return (a*b)/g;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    cout << gcd(a,b) << '\n';
    cout << lcm(a,b) << '\n';
    return 0;
}