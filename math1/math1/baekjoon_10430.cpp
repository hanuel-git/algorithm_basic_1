#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int ans;
    ans = (a+b)%c;
    cout << ans << '\n';
    ans = ((a%c)+(b%c))%c;
    cout << ans << '\n';
    ans = (a*b)%c;
    cout << ans << '\n';
    ans = ((a%c)*(b%c))%c;
    cout << ans << '\n';
    
    return 0;
}