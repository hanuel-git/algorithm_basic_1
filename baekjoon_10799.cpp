#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int size = str.size();
    stack<int> s;
    int cnt=0;
    bool tag = false;
    
    for(int i=0; i<size; i++)
    {
        if (str[i]=='(')
        {
         s.push(str[i]);
         tag = false;
        }
        else
        {
            s.pop();
            if (tag)
                cnt++;
            else
                cnt += s.size();
            tag = true;

        }
    }
    
    cout << cnt;
    return 0;
}