#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    while(n--)
    {
        string str;
        cin >> str;
        stack<char> s;
        
        int size = str.size(); 
        int cnt=0;

        for(int i=0; i<size; i++)
        {
            char ch=str[i];
            
            if (ch=='(')
            {
                s.push(ch);
            }
            else
            {
                if (s.empty())
                {
                  cnt = 1;
                  break;
                }
                else
                    s.pop();
            }
        }
        if (cnt==1 || !s.empty())
            cout << "NO";
        else
            cout << "YES";
        cout << endl;
    }
    return 0;
}