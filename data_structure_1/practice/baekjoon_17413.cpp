#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    
    int size = str.size();
    int a = 0;
    stack<char> s;
    
    for(int i=0; i<size; i++)
    {
        char x = str[i];       
        if (x=='<')
        {
            if(!s.empty())
            {
                while(!s.empty())
                {
                    cout << s.top();
                    s.pop();
                }
            }
            cout << x;
            a=1;
        }
        else if (x=='>')
        {
            cout << x;
            a=0;
        }
        else if (a==1)
            cout << x;
        else
        {
            if (x==' ')
            {
                while(!s.empty())
                {
                    cout << s.top();
                    s.pop();
                }
                cout << x;
            }
            else
                s.push(x);
        }
    }
    while(!s.empty())
    {
          cout << s.top();
          s.pop();
    }   
    return 0;
}