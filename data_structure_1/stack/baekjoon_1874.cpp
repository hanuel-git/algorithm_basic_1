#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
    stack<int> s;
    int num;
    string str;
    
    cin >> num;

    int m=0;

    while(num--)
    {
        int a;
        cin >> a;
        if (a > m)
        {
            while(a > m)
            {
                s.push(++m);
                str += '+';
            }
            s.pop();
            str += '-'; 
        }
        else
        {
            bool found = false;
            if (!s.empty())
            {
                int top = s.top();
                s.pop();
                str += '-';
                if (top == a)
                    found = true;
            }
            if (!found)
            {
                cout << "NO" << '\n';
                return 0;
            }
        }
    }
    for (auto x : str)
        cout << x << '\n';
    return 0;
}