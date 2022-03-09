#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int m;
    cin >> m;
    
    // a진법에서 10진법으로 변환
    int ans=0;
    while(m--)
    {
        int x;
        cin >> x;
        ans = ans*a + x;
    }
    
    // 10진법에서 b진법으로 변환
    stack<int> s;
    while(ans!=0)
    {
        s.push(ans%b);
        ans = ans/b;
    }
    while(!s.empty())
    {
        cout << s.top() << ' ';
        s.pop();
    }
    return 0;
}