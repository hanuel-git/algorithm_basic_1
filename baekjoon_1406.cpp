#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int num;
    cin >> num;
    cin.ignore();
    stack<char> left;
    stack<char> right;
 
    int size = str.size();
    for(int i=0; i<size; i++)
        left.push(str[i]);
    

    while(num--)
    {
        string co;
        getline(cin, co);
        
        if (co=="L")
        {
            if (!left.empty())
            {
                char x = left.top();
                left.pop();
                right.push(x);                
            }
        }
        else if (co=="D")
        {
            if (!right.empty())
            {
                char x= right.top();
                right.pop();
                left.push(x);
            }
        }
        else if (co=="B")
        {
            if (!left.empty())
                left.pop();
        }
        else
        {
            char x = co[2];
            left.push(x);
        }   
    }

    while(!left.empty())
    {
        char x = left.top();
        left.pop();
        right.push(x);
    }

    while(!right.empty())
    {
        char x = right.top();
        cout << x;
        right.pop();
    }
    return 0;
}